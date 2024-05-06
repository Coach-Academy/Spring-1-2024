#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        for (int i = 0; i < n - 1 and k;) {
            if (v[i] - 1 >= 0)
                v[i]--, v.back()++, k--;
            else
                i++;
        }
        for (auto &s: v)
            cout << s << ' ';
        cout << endl;
    }
}
