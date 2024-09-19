#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long odds = n / 2;
    if (n % 2 > 0)
        odds++;
    if (k <= odds) {
        k += k - 1;
    } else {
        if (n % 2 == 1)
            k -= (n - k) + 1;
        else
            k -= (n - k);
    }
    cout << k << endl;
}
