#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;while(cin>>n)
    {
        if(n==0) break;
        deque<int>d(n);
        iota(d.begin(),d.end(),1); // 2 3 4 5 ...n
        vector<int>dis;
        while(d.size()>1)
        {
            dis.push_back(d.front());
            d.pop_front();
            d.push_back(d.front());
            d.pop_front();
        }
        cout<<"Discarded cards:";
        for(int i=0;i<n-1;i++)
        {
            if(i==0) cout<<" "<<dis[i];
            else cout<<", "<<dis[i];
        }
        cout<<'\n';
        cout<<"Remaining card: ";
        cout<<d.front()<<'\n';
    }
    return 0;
}
