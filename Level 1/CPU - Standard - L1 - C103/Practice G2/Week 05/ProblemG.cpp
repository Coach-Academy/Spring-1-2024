#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n , m;
   cin >> n >> m;
   int arr[m];
   for (int i=0;i<m;i++)
    cin >> arr[i];

   sort (arr , arr+m);

   int mn = 1e9  , idx = 0;

   for (int i=n-1;i<m;i++){
    mn = min (mn , arr[i] - arr[idx++] );

   }
    cout << mn ;
}
