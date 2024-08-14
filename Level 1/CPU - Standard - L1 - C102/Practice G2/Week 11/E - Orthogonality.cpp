#include <bits/stdc++.h>

using namespace std;

int innerProduct(deque<int> &a, deque<int> &b) {
    if (a.size() == 1 and b.size() == 1) {
        return a.front() * b.front();
    }
    int sum = a.front() * b.front();
    a.pop_front(), b.pop_front();
    int ans = innerProduct(a, b);
    return ans + sum;
}

int main() {
    int n;
    cin >> n;
    deque<int> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    if (innerProduct(a, b) == 0)
        cout << "Yes\n";
    else
        cout << "No\n";
}
