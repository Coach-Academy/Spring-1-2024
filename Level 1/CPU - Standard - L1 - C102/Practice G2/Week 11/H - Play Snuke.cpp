#include <bits/stdc++.h>

using namespace std;

int solve(deque<int> &a, deque<int> &p, deque<int> &x, int mn) {
    if (a.empty() and p.empty() and x.empty()) {
        return mn;
    }
    int time = a.front(), price = p.front(), stock = x.front();
    a.pop_front(), p.pop_front(), x.pop_front();

    if (stock > time) {
        mn = min(mn, price);
    }
    return solve(a, p, x, mn);
}

int main() {
    int n;
    cin >> n;
    deque<int> a(n), p(n), x(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> p[i] >> x[i];
    }
    int mn = solve(a, p, x, INT_MAX);
    if (mn == INT_MAX) {
        cout << -1 << endl;
    } else
        cout << mn << endl;
}
