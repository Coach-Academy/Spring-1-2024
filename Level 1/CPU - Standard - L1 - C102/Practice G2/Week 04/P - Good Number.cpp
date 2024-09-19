#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int ans = 0;
    while (n--) {
        string s;
        cin >> s;
        bool kGood = true;
        for (int i = 0; i <= k; i++) {
            if (s.find(i + '0') == -1)
                kGood = false;
        }
        if (kGood)
            ans++;
    }
    cout << ans << endl;
}
