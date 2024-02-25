#include <iostream>
using namespace std ;
int main () {
   for (int i=1 ; i<=26 ; i++){
       int x;
       cin >> x;
       x--;
       cout << char (x + 'a') ;
   }
}