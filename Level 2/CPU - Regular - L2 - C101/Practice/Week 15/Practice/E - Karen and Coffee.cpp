#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=200005;
int par[N],g[N];
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k,q;cin>>n>>k>>q;
    for(int i=0;i<n;i++)
    {
        int l,r;cin>>l>>r;
        par[l]++;
        par[r+1]--;
    }
    for(int i=1;i<N;i++)
    {
        par[i]+=par[i-1];
        if(par[i]>=k)
        {
            g[i]=1;
        }
    }
    for(int i=1;i<N;i++)
    {
        g[i]+=g[i-1];
    }
    while(q--)
    {
        int l,r;cin>>l>>r;
        cout<<g[r]-g[l-1]<<'\n';
    }
    return 0;
}
