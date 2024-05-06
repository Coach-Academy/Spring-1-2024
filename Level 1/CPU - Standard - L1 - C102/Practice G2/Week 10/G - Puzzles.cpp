#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int mn = INT_MAX;
    for (int i = 0; i + m - 1 < n; ++i) {
        mn = min(mn, v[i + m - 1] - v[i]);
    }
    cout << mn << endl;
}
