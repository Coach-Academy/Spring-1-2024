#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int n;cin>>n;
        vector<int>pos(n+1,-1);
        int ans=n+5;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            if(pos[x]!=-1)
            {
                ans=min(ans,i-pos[x]+1);
            }
            pos[x]=i;
        }
        if(ans==n+5)
        {
            ans=-1;
        }
        cout<<ans<<'\n';
    }
    return 0;
}
