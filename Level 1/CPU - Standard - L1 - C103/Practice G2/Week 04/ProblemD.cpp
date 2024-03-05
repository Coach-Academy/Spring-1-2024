#include <iostream>
using namespace std ;
int main () {
   int t;
   cin >> t;
   while (t--){
       int n;
       cin >> n;
       int arr[n+1];
       for (int i=0;i<n;i++)
           cin >> arr[i];
       int mn = 1e9 , bad = 0 ;
       for (int i = n-1 ; i>=0 ; i--){
           if (arr[i] > mn)
               bad++;
           mn = min (mn , arr[i]);
       }
       cout << bad << "\n";
   }
}