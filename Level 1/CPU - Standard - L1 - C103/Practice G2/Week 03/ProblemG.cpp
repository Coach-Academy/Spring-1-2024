#include <iostream>
using namespace std ;
int main () {
    int n , k ;
    cin >> n >> k ;
    for ( int i = 1; i<=k ;i++){
        int last = n % 10 ;
        if (last == 0)
            n /= 10;
        else n--;
    }
    cout << n ;
}