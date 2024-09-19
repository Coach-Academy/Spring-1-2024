#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    bool almostLucky = 0;
    for (int i = 1; i <= n; i++) {
        int tmp = i;
        bool lucky = true;
        while (tmp > 0) {
            int lstDig = tmp % 10;
            tmp /= 10;
            if (lstDig != 4 and lstDig != 7)
                lucky = false;
        }

        if (lucky) {
            if (n % i == 0) {
                almostLucky = 1;
                break;
            }
        }

    }
    if (almostLucky)
        cout << "YES\n";
    else cout << "NO\n";
}
