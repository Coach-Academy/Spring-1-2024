#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int beforeComp[n], afterComp[n], gain[n];
    long long sizeOfSongs = 0;
    for (int i = 0; i < n; ++i) {
        cin >> beforeComp[i] >> afterComp[i];
        sizeOfSongs += beforeComp[i];
        gain[i] = beforeComp[i] - afterComp[i];
    }
    sort(gain, gain + n, greater<>());
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (sizeOfSongs <= m)
            break;
        sizeOfSongs -= gain[i];
        ans++;
    }
    if (sizeOfSongs <= m)
        cout << ans << endl;
    else
        cout << -1 << endl;
}
