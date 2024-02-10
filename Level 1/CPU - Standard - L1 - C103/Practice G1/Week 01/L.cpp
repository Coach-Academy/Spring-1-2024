#include <bits/stdc++.h>
using  namespace  std;

int main ()
{
    // n dollar  -> 100
    int n  , ans = 0;
    cin >> n ;

    // 100
    ans += n / 100 ;
    n = n % 100;

    // 20
    ans += n / 20 ;
    n = n % 20;

    // 10
    ans += n / 10 ;
    n = n % 10;

    // 5
    ans += n / 5 ;
    n = n% 5;

    // 1
    ans+= n ;

    cout << ans<<endl;
}
