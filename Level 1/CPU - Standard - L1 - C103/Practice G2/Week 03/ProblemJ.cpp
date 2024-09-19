#include <bits/stdc++.h>
using namespace std ;
int main () {
   int n ;
   cin >> n;
   int taxi = 0 , one = 0 , two = 0 , three = 0 ;
   for (int i=1 ;i<=n ;i++){
       int x;
       cin >> x;
       one+=(x==1) , two+=(x==2) , three+=(x==3);
       taxi+=(x==4);
   }
   taxi+=three ;
   if (three>=one)
       one = 0 ;
   else one = one - three ;
   int sum = two * 2 + one ;
    taxi+= ceil (sum / 4.0)  ;
    cout << taxi ;
}