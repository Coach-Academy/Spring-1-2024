#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    multiset<pair<ll,ll>>m,idx;
    int c=0;
    int q;cin>>q;while(q--)
    {
        int op;cin>>op;
        if(op==1)
        {
            ll val;cin>>val;
            c++;
            m.insert({val,c});
            idx.insert({c,val});
        }
        else if(op==2)
        {
            pair<ll,ll>p=*idx.begin();
            ll index=p.first;
            ll val=p.second;
            idx.erase(idx.begin());
            m.erase(m.find({val,index}));
            cout<<index<<' ';
        }
        else
        {
            pair<ll,ll>p=*--m.end();
            ll index=p.second;
            ll val=p.first;
            auto it=m.lower_bound({val,-1});
            cout<<it->second<<' ';
            idx.erase(idx.find({it->second,it->first}));
            m.erase(it);
        }
    }
}
