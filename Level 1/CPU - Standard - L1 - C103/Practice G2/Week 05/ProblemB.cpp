#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin >> n ;
    int arr[n];
    for (int i=0;i<n;i++)
        cin >> arr[i];
   for (int i=0;i<n;i++){
        if (arr[i]==1)
        return cout << -1 , 0;
   }
   cout << 1;
    return 0 ;
}
