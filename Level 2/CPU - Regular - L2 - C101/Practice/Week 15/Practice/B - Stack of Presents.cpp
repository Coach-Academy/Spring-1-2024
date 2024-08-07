#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int n,m;cin>>n>>m;
        int a[n],pos[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            pos[a[i]]=i;
        }
        ll last=-1,ans=0;
        for(int i=0;i<m;i++)
        {
            int x;cin>>x;
            if(pos[x]<=last)
            {
                ans++;
            }
            else
            {
                last=pos[x];
                ans+=2*(pos[x]-i)+1;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}
