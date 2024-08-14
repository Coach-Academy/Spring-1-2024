#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n), ans, pos(n + 1);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            pos[v[i]] = i;
        }
        for (int i = n; i >= 1; --i) {
            int cnt = 0;
            for (int j = pos[i]; j < v.size(); ++j) {
                cout << v[j] << ' ';
                cnt++;
            }
            while (cnt--)
                v.pop_back();
        }
        cout << endl;
    }
}
