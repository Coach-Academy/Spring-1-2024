#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int ans = 0;
    do {
        a *= 3, b *= 2;
        ans++;
    } while (a <= b);
    cout << ans << endl;
}
