#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;cin>>n>>m;
    int par[m+1]={};
    for(int i=0;i<n;i++)
    {
        int l,r;cin>>l>>r;
        par[l]++;
        par[r+1]--;
    }
    for(int i=2;i<=m;i++)
    {
        par[i]+=par[i-1];
    }
    vector<int>ans;
    for(int i=1;i<=m;i++)
    {
        if(!par[i])
        {
            ans.push_back(i);
        }
    }
    cout<<ans.size()<<'\n';
    for(auto it:ans)
    {
        cout<<it<<' ';
    }
    return 0;
}
