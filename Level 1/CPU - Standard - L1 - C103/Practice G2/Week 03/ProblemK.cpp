#include <bits/stdc++.h>
using namespace std ;
int main () {
   int n ;
   cin >> n;
   for (int i =1 ; i<=n ;i++){
       int curr = i;
       bool ok = true;
       while (curr){
           int last = curr % 10;
           if (last !=4 && last!= 7)
           {
               ok = false ;
               break;
           }
           curr/=10;
       }
       if (ok && n % i == 0 )
       {
           cout << "YES";
           return 0 ;
       }
   }
   cout << "NO";
}