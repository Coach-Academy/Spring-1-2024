#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    while (k--) {
        int lastDigit = n % 10;

        if (lastDigit > 0) {
            n--;
        } else
            n /= 10;
    }
    cout << n << endl;
}
