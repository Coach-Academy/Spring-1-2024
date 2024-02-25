#include <iostream>
using namespace std ;
int main () {
    int n ;
    cin >> n;
    int x = 0 , height = 0 , level = 0 , sum = 0;
    while (x <= n) {
        level++;
        sum+=level;
        x+=sum;
    }
    cout << level-1 ;
}