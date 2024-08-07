#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int ans=n;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                ans=max(ans,2*max(i+1,n-i));
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}
