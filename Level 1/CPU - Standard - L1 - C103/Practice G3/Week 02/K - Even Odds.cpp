#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long div = n / 2;
    if (n % 2 > 0)
        div++;

    if (k <= div) // odd
        k = k + k - 1;
    else {//even
        if (n % 2 > 0)
            k = k - (n - k) - 1;
        else
            k = k - (n - k);
    }
    cout << k << endl;
}
