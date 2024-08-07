#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;cin>>n>>m;
    bool a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int o=0;o<m;o++)
        {
            cin>>a[i][o];
        }
    }
    bool b[n][m]={};
    vector<pair<int,int>>ans;
    for(int i=0;i<n-1;i++)
    {
        for(int o=0;o<m-1;o++)
        {
            if(a[i][o]&&a[i+1][o]&&a[i][o+1]&&a[i+1][o+1])
            {
                ans.push_back({i+1,o+1});
                b[i][o]=b[i+1][o]=b[i][o+1]=b[i+1][o+1]=1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int o=0;o<m;o++)
        {
            if(a[i][o]!=b[i][o])
            {
                cout<<-1;
                return 0;
            }
        }
    }
    cout<<ans.size()<<'\n';
    for(auto [a,b]:ans)
    {
        cout<<a<<' '<<b<<'\n';
    }
    return 0;
}
