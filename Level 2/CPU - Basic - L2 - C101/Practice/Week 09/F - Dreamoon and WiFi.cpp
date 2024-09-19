#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s,f;cin>>s>>f;
    int a=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='+') a++;
        else a--;
    }
    int qm=0,b=0;
    for(int i=0;i<s.size();i++)
    {
        if(f[i]=='?')
        {
            qm++;
        }
        else
        {
            if(f[i]=='+') b++;
            else b--;
        }
    }
    int ans=0;
    for(int mask=0;mask<(1<<qm);mask++)
    {
        int x=b;
        for(int i=0;i<qm;i++)
        {
            if((mask>>i)&1) x++;
            else x--;
        }
        if(a==x) ans++;
    }
    cout<<fixed<<setprecision(12)<<ans*1.0/(1<<qm);
    return 0;
}
