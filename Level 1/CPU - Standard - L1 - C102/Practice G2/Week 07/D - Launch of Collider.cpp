#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v(n);
    for (auto &in: v) {
        cin >> in;
    }
    int mnDis = INT_MAX;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'R' and s[i + 1] == 'L')
            mnDis = min(mnDis, (v[i + 1] - v[i]) / 2);
    }
    if (mnDis != INT_MAX)
        cout << mnDis << endl;
    else
        cout << -1 << endl;
}
