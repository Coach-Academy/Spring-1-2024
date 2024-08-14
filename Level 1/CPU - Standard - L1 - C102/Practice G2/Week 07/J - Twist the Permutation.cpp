#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        deque<int> dq(n);
        for (int i = 0; i < n; ++i) {
            cin >> dq[i];
        }
        vector<int> ans;
        for (int i = dq.size() - 1; i >= 0; --i) {
            int cnt = 0;
            while (dq[i] != i + 1) {
                dq.push_back(dq.front());
                dq.pop_front();
                cnt++;
            }
            dq.pop_back();
            ans.push_back(cnt);
        }
        reverse(ans.begin(), ans.end());
        for (auto &out: ans)
            cout << out << ' ';
        cout << endl;
    }
}
