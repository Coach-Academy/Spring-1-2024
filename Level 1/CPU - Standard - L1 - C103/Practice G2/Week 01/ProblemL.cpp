#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin >> n; // number of dollars
    int ans = 0; // minimum number if bills
    ans += (n / 100); // number of 100
    n  %= 100;
    ans += (n/20);
    n %= 20;
    ans += (n/10);
    n%=10;
    ans += (n / 5);
    n%=5;
    ans += n ;
    cout << ans ;

    return 0;
}
