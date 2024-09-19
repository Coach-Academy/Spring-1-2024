#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    map<int,int>frq;multiset<int>ms;
    int q;cin>>q;
    for(int i=0;i<q;i++)
    {
        ms.insert(0);
    }
    while(q--)
    {
        int op;cin>>op;
        if(op==1)
        {
            int x;cin>>x;
            ms.erase(ms.find(frq[x]));
            frq[x]++;
            ms.insert(frq[x]);
        }
        else if(op==2)
        {
            int x;cin>>x;
            ms.erase(ms.find(frq[x]));
            if(frq[x]) frq[x]--;
            ms.insert(frq[x]);
        }
        else
        {
            int x;cin>>x;
            if(ms.find(x)!=ms.end())
            {
                cout<<1<<'\n';
            }
            else
            {
                cout<<0<<'\n';
            }
        }
    }
    return 0;
}
