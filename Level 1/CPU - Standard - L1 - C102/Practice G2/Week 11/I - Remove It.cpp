#include <bits/stdc++.h>

using namespace std;

void solve(deque<int> &a, int x) {
    if (a.empty())
        return;

    int num = a.front();
    a.pop_front();
    if (num != x)
        cout << num << ' ';
    solve(a, x);
}

int main() {
    int n, x;
    cin >> n >> x;
    deque<int> dq(n);
    for (int i = 0; i < n; ++i) {
        cin >> dq[i];
    }
    solve(dq, x);
}
