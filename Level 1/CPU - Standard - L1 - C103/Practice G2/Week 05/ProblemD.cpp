#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n , m ;
   cin >> n >> m ;
   int a[n] , b[n] , diff[n];
   long long sum1 = 0;
   long long sum = 0;
   for (int i=0;i<n;i++){
    cin >> a[i] >> b[i];
    sum1+=a[i];
    diff[i] = a[i] - b[i];
    sum+=b[i];
   }
   if (sum > m)
    return cout << -1 , 0;
    sort (diff , diff+n , greater<int>());
    int ans = 0;
    int i = 0 ;
    while (sum1 > m){
        sum1-=diff[i++];
        ans++;
    }
    cout << ans ;

}
