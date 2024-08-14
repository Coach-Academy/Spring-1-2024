#include <iostream>
using namespace std;

int main()
{
   long long n ,k;
   cin >> n >> k;
   long long odds = n - n/2 , evens = n/2;
   if (k > odds)
   {
       // k is even number
       k -= odds;
       //kth even number
       cout << k*2 ;
   }
   else
   {
       // k is odd
       // kth odd number
       cout << k*2 -1 ;
   }
    return 0;
}