#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;while(cin>>n)
    {
        if(n==0) break;
        map<vector<int>,ll>m;
        for(int i=0;i<n;i++)
        {
            vector<int>v(5);
            for(auto&it:v)
            {
                cin>>it;
            }
            sort(v.begin(),v.end());
            m[v]++;
        }
        ll mx=0;
        for(auto[a,b]:m)
        {
            mx=max(mx,b);
        }
        ll cnt=0;
        for(auto[a,b]:m)
        {
            if(b==mx)
            {
                cnt++;
            }
        }
        cout<<mx*cnt<<'\n';
    }
    return 0;
}
