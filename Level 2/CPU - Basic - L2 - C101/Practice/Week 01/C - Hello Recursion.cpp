#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,arr[105],sum;
void solve(int i)
{
    if(i==n) return;
    sum+=arr[i];
    solve(i+1);
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;for(int test=1;test<=t;test++)
    {
        cin>>n;
        sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        solve(0);
        cout<<"Case "<<test<<": "<<sum<<'\n';
    }
    return 0;
}
