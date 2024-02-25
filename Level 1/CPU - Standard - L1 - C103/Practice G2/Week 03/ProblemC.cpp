#include <iostream>
using namespace std ;
int main () {
    int n ; // number of rooms
    cin >> n;
    int ans = 0;
    for (int i=1 ; i<= n ;i++ ){
        int p , q ;
        cin >> p >> q;
        if (q - p >= 2)
            ans++ ;
    }
    cout << ans ;
}