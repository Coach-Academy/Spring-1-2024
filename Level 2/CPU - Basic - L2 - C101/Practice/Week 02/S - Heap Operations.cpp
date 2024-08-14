#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    priority_queue<ll,vector<ll>,greater<ll>>pq;
    vector<string>ans;
    int t;cin>>t;while(t--)
    {
        string op;cin>>op;
        if(op=="insert")
        {
            ll x;cin>>x;
            pq.push(x);
            ans.push_back({op+' '+to_string(x)});
        }
        else if(op=="getMin")
        {
            ll x;cin>>x;
            while(pq.size()&&pq.top()<x)
            {
                pq.pop();
                ans.push_back("removeMin");
            }
            if(pq.empty()||pq.top()>x)
            {
                pq.push(x);
                ans.push_back({"insert "+to_string(x)});
            }
            ans.push_back({op+' '+to_string(x)});
        }
        else
        {
            if(pq.empty())
            {
                ans.push_back("insert 10");
            }
            else
            {
                pq.pop();
            }
            ans.push_back(op);
        }
    }
    cout<<ans.size()<<'\n';
    for(auto it:ans)
    {
        cout<<it<<'\n';
    }
}
