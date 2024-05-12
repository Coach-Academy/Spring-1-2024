#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        ll c1,c2,c3;cin>>c1>>c2>>c3;
        ll a,b,c,x,y;cin>>a>>b>>c>>x>>y;
        c1-=a;
        c2-=b;
        c3-=c;
        if(c1<0||c2<0||c3<0)
        {
            cout<<"NO\n";
            continue;
        }
        ll mn=min(c1,x);
        c1-=mn;
        x-=mn;
        c3-=x;
        if(c3<0)
        {
            cout<<"NO\n";
            continue;
        }
        mn=min(c2,y);
        c2-=mn;
        y-=mn;
        c3-=y;
        if(c3<0)
        {
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
    }
    return 0;
}
