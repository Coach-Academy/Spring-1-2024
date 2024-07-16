#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int n;cin>>n;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            ll x;cin>>x;
            sum+=x;
        }
        ll a=sum%n,b=n-a;
        cout<<a*b<<'\n';
    }
    return 0;
}
