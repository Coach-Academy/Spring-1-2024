#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, x;
    cin >> k >> x;
    int total = 500 * k;

    if (total < x)
        cout << "No\n";
    else
        cout << "Yes\n";
}
