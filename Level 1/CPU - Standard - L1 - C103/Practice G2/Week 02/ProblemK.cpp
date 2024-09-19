#include <bits/stdc++.h>
using namespace std ;
int main () {
   long long n , k;
   cin >> n >> k;
   long long mid = (n+1) / 2;
   if (k > mid ) { // number is even number
       k -= mid;
       cout << k*2;
   }
   else { // number is odd
       cout << (k * 2) -1;
   }


}

