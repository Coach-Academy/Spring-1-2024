#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    ll s[n+1]={};
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
        s[i]+=s[i-1];
    }
    int q;cin>>q;while(q--)
    {
        int l,r;cin>>l>>r;
        cout<<s[++r]-s[l]<<'\n';
    }
    return 0;
}
