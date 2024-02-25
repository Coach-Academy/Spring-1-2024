#include <bits/stdc++.h>

using namespace std;

int main() {
    int cnt = 0;
    int n;
    cin >> n;
    while (n--) {
        int p, q;
        cin >> p >> q;
        if (q - p >= 2)
            cnt++;
    }
    cout << cnt << endl;
}
