#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    deque<int>d;
    priority_queue<int>pq;
    int q;cin>>q;while(q--)
    {
        int op;cin>>op;
        if(op==1)
        {
            int x;cin>>x;
            d.push_back(x);
        }
        else if(op==2)
        {
            if(pq.size()) cout<<-pq.top()<<'\n',pq.pop();
            else cout<<d.front()<<'\n',d.pop_front();
        }
        else
        {
            for(auto it:d)
            {
                pq.push(-it);
            }
            d.clear();
        }
    }
}
