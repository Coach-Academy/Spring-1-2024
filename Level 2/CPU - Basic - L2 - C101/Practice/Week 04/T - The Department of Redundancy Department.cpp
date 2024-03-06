#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    map<int,int>m;
    vector<int>v;
    int n;while(cin>>n)
    {
        m[n]++;
        v.push_back(n);
    }
    for(auto it:v)
    {
        if(m[it]!=0)
        {
            cout<<it<<' '<<m[it]<<'\n';
            m[it]=0;
        }
    }
    return 0;
}
