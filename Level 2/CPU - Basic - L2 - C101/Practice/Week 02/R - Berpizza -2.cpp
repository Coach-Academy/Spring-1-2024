#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    queue<pair<ll,ll>>q;
    priority_queue<pair<ll,ll>>pq;
    int c=0;
    map<ll,bool>vis;
    int t;cin>>t;while(t--)
    {
        int op;cin>>op;
        if(op==1)
        {
            ll x;cin>>x;
            q.push({x,++c});
            pq.push({x,-c});
        }
        else if(op==2)
        {
            while(q.size()&&vis[q.front().second]) q.pop();
            cout<<q.front().second<<' ';
            vis[q.front().second]=1;
            q.pop();
        }
        else
        {
            while(pq.size()&&vis[-pq.top().second]) pq.pop();
            cout<<-pq.top().second<<' ';
            vis[-pq.top().second]=1;
            pq.pop();
        }
    }
}
