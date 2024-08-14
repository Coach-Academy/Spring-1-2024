#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    bool almostLucky = false;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) { // check if i is divisor
            int tmp = i;
            bool lucky = true;
            while (tmp != 0) {
                int lastDig = tmp % 10;
                if (lastDig != 4 and lastDig != 7) {
                    lucky = false;
                }
                tmp /= 10;
            }
            if (lucky)
                almostLucky = true;
        }
    }
    if (almostLucky)
        cout << "YES\n";
    else
        cout << "NO\n";
}
