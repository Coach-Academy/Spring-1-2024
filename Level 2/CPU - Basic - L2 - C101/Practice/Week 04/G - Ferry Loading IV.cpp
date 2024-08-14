#include<bits/stdc++.h>
using namespace std;
#define ll long long
void flip(string&cur)
{
    if(cur=="left") cur="right";
    else cur="left";
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        ll sz,q;cin>>sz>>q;
        sz*=100;
        map<string,queue<ll>>m;
        while(q--)
        {
            ll car;string side;cin>>car>>side;
            m[side].push(car);
        }
        string cur="left";
        ll ans=0;
        while(m["left"].size()||m["right"].size())
        {
            ll sum=0;
            while(m[cur].size()&&sum+m[cur].front()<=sz)
            {
                sum+=m[cur].front();
                m[cur].pop();
            }
            ans++;
            flip(cur);
        }
        cout<<ans<<'\n';
    }
    return 0;
}
