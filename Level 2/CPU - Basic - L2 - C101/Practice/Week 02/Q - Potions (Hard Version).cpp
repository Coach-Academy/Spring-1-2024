#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    priority_queue<ll>pq;
    ll sum=0,ans=0;
    for(int i=0;i<n;i++)
    {
        ll x;cin>>x;
        sum+=x;
        pq.push(-x);
        while(pq.size()&&sum<0)
        {
            sum+=pq.top();
            pq.pop();
        }
    }
    cout<<pq.size();
}
