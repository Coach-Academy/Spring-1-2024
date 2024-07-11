#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int n;cin>>n;
        int s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        sort(s,s+n);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=__gcd(ans,s[i]-s[0]);
        }
        if(ans==0)
        {
            ans=-1;
        }
        cout<<ans<<'\n';
    }
    return 0;
}
