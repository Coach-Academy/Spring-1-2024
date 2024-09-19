#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int n;cin>>n;
        int s[n+1],idx[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>s[i];
            idx[s[i]]=i;
        }
        bool vis[n+1]={};
        for(int i=n;i>=1;i--)
        {
            if(vis[i]) continue;
            for(int o=idx[i];o<=n;o++)
            {
                if(vis[s[o]]) break;
                cout<<s[o]<<' ';
                vis[s[o]]=1;
            }
        }
        cout<<'\n';
    }
}
