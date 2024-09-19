#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   int arr[n];
   cin >> arr[0];
   int mx = arr[0] , mn = arr[0] , ans = 0;
   for (int i = 1; i < n ;i++){
    cin >> arr[i];
    if (arr[i] > mx || arr[i] < mn)
        ans++;
    mx = max (mx , arr[i]);
    mn = min (mn , arr[i]);
   }
   cout << ans ;

}
