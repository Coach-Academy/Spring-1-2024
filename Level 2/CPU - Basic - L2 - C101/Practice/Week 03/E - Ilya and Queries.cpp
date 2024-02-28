#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;cin>>s;
    int n=s.size();
    s='#'+s;
    int pre[n+1]={};
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i+1])
        {
            pre[i]=1;
        }
        pre[i]+=pre[i-1];
    }
    pre[n]=pre[n-1];
    int q;cin>>q;while(q--)
    {
        int l,r;cin>>l>>r;
        int ans=pre[r]-pre[l-1];
        if(pre[r]-pre[r-1]) ans--;
        cout<<ans<<'\n';
    }
    return 0;
}
