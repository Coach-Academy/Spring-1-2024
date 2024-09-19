#include <iostream>
using namespace std ;
int main () {
    int a , b ;
    cin >> a >> b;
    int years = 0 ;
    while (a <= b){
        a*=3; // a = 12 , 36 , 108 
        b*=2; // 18 , 36 , 72
        years++; // 1 2 3
    }
    cout << years ;
}