#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int nxt[n+1]={},s[n+1]={},pos[n+1]={};
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
        pos[i]=n+1;
    }
    for(int i=n;i>=1;i--)
    {
        nxt[i]=pos[s[i]];
        pos[s[i]]=i;
    }
    int ans=1,a=1,b=1;
    for(int i=2;i<=n;i++)
    {
        if(s[i]!=s[1])
        {
            b=i;
            ans++;
            break;
        }
    }
    if(ans==1)
    {
        cout<<1;
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        if(s[i]==s[a])
        {
            a=i;
        }
        else if(s[i]==s[b])
        {
            b=i;
        }
        else
        {
            if(nxt[a]>nxt[b])
            {
                a=i;
            }
            else
            {
                b=i;
            }
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
