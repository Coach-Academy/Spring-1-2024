#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    ll s[n+1],pre[n+1]={};
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
        pre[i]=s[i];
        pre[i]+=pre[i-1];
    }
    sort(s+1,s+1+n);
    ll pre2[n+1]={};
    for(int i=1;i<=n;i++)
    {
        pre2[i]=s[i];
        pre2[i]+=pre2[i-1];
    }
    int q;cin>>q;while(q--)
    {
        int op;cin>>op;
        if(op==1)
        {
            int l,r;cin>>l>>r;
            cout<<pre[r]-pre[l-1]<<'\n';
        }
        else
        {
            int l,r;cin>>l>>r;
            cout<<pre2[r]-pre2[l-1]<<'\n';
        }


    }
    return 0;
}
