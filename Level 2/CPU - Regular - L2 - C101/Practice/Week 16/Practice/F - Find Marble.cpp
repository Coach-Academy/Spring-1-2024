#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,s,t;cin>>n>>s>>t;
    int p[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>p[i];
    }
    int ans=0;
    bool vis[n+1]={};
    while(s!=t)
    {
        if(vis[s])
        {
            cout<<-1;
            return 0;
        }
        vis[s]=1;
        s=p[s];
        ans++;
    }
    cout<<ans;
    return 0;
}
