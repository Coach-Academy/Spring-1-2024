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
        bool vis[n]={};int gc=0;
        for(int i=0;i<n;i++)
        {
            int curGc=0,cur,idx=i;
            for(int o=0;o<n;o++)
            {
                if(vis[o])
                {
                    continue;
                }
                if(__gcd(gc,s[o])>curGc)
                {
                    curGc=__gcd(gc,s[o]);
                    cur=s[o];
                    idx=o;
                }
            }
            cout<<cur<<' ';
            vis[idx]=1;
            gc=__gcd(gc,cur);
        }
        cout<<'\n';
    }
    return 0;
}
