#include <bits/stdc++.h>
using namespace std ;
int main () {
   int t;
   cin >> t;
   while (t--){
       int n , k;
       cin >> n >> k;
       int a[n+1] , b[n+1];
       for (int i=0;i<n;i++)
           cin >> a[i];
       for (int i=0;i<n;i++)
           cin >> b[i];
       sort (a , a+n);
       sort(b , b+n , greater<int>());
       for (int i =0 ; i < n ; i++){
           if (k>0 && a[i] < b[i]){
               swap(a[i] , b[i]);
               k--;
           }
       }
       int sum = 0;
       for (int i=0;i<n;i++)
           sum+=a[i]  ;
       cout << sum << "\n";
   }
}