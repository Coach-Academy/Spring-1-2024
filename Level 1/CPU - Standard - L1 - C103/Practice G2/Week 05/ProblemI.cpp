#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   int passengers = 0 ;
   int ans = 0;
   while (n--){
    int a , b;
    cin >> a >> b;
    passengers+=(b-a);
    ans = max (ans , passengers);
   }
   cout << ans ;
}