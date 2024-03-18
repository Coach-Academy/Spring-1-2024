#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin >> n;
    long long arr[n+1];
    long long sum = 0;
    for (int i=0;i<n;i++)
        cin >> arr[i] , sum+=arr[i];
    long long x ;
    cin >> x;
    long long rounds = x / sum ; 
    long long ans = rounds * n ; 
    long long sum2 = sum * rounds ; 
    x = x - sum2; 
    sum2 = 0;
    for (int i=0;i<n && sum2<=x;i++){
        sum2+=arr[i];
        ans++;
    }
    cout << ans ;


}
