#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    map<int,vector<int>>m;
    for(int i=0;i<n;i++)
    {
        int v,c;cin>>v>>c;
        m[c].push_back(v);
    }
    string ans="YES";
    for(auto[a,b]:m)
    {
        if(!is_sorted(b.begin(),b.end()))
        {
            ans="NO";
        }
    }
    cout<<ans;
    return 0;
}
