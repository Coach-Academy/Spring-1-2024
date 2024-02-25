#include <iostream>
using namespace std ;
int main () {
   int n;
   cin >> n;
   int x = 0;
   for ( int i = 1; i <=n ; i++){
       char a , b , c;
       cin >> a >> b >> c;
       if (a =='+' || b=='+' || c=='+')
           x++;
       else x--;
   }
   cout << x;
}