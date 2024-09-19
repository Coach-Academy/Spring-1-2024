#include <bits/stdc++.h>

using namespace std;

int main() {
    int b, n, m;
    cin >> b >> n >> m;
    vector<int> keyboards(n), usbs(m);
    for (auto &in: keyboards)
        cin >> in;
    for (auto &in: usbs)
        cin >> in;

    int ans = -1;

    for (auto &keyboard: keyboards) {
        for (auto &usb: usbs) {
            if (usb + keyboard <= b) {
                ans = max(ans, usb + keyboard);
            }
        }
    }
    cout << ans << endl;
}
