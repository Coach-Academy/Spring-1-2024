#include <bits/stdc++.h>

using namespace std;

int sum(int i, deque<int> &dq) {
    if (i == dq.size() - 1) {
        return dq[i];
    }
    int num = dq[i];
    int ans = num + sum(i + 1, dq);
    return ans;
}

int main() {
    int t;
    cin >> t;
    for (int test = 1; test <= t; test++) {
        int n;
        cin >> n;
        deque<int> dq(n);
        for (int i = 0; i < n; ++i) {
            cin >> dq[i];
        }
        cout << "Case " << test << ": ";
        cout << sum(0, dq) << endl;
    }
}
