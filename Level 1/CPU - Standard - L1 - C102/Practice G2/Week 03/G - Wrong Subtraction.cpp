#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    while (k--) {
        int lastDig = n % 10;
        if (lastDig != 0)
            n--;
        else
            n /= 10;
    }
    cout << n << endl;
}
