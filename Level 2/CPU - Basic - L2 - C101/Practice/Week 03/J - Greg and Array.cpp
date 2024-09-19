#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m,k;cin>>n>>m>>k;
    ll s[n+1]={};
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
    }
    ll l[m+1],r[m+1],d[m+1];
    for(int i=1;i<=m;i++)
    {
        cin>>l[i]>>r[i]>>d[i];
    }
    ll par[m+1]={};
    for(int i=0;i<k;i++)
    {
        int x,y;cin>>x>>y;
        par[x]++;
        par[y+1]--;
    }
    for(int i=1;i<=m;i++)
    {
        par[i]+=par[i-1];
    }
    ll par2[n+1]={};
    for(int i=1;i<=m;i++)
    {
        ll sum=d[i]*par[i];
        par2[l[i]]+=sum;
        par2[r[i]+1]-=sum;
    }
    for(int i=1;i<=n;i++)
    {
        par2[i]+=par2[i-1];
        cout<<s[i]+par2[i]<<' ';
    }
    return 0;
}
