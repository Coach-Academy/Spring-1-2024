#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;while(cin>>n)
    {
        if(n==0) break;
        priority_queue<ll,vector<ll>,greater<ll>>pq;
        for(int i=0;i<n;i++)
        {
            ll x;cin>>x;
            pq.push(x);
        }
        ll ans=0;
        while(pq.size()>1)
        {
            ll a=pq.top();pq.pop();
            ll b=pq.top();pq.pop();
            ans+=a+b;
            pq.push(a+b);
        }
        cout<<ans<<'\n';
    }
    return 0;
}
