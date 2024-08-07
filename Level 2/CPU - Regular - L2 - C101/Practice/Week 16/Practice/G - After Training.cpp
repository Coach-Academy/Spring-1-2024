#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;cin>>n>>m;
    int l=(m+1)/2-1,r=(m+1)/2+1;
    vector<int>ans={(m+1)/2};
    while(l>0&&r<=m)
    {
        if(m%2==0)
        {
            ans.push_back(r++);
            ans.push_back(l--);
        }
        else
        {
            ans.push_back(l--);
            ans.push_back(r++);
        }
    }
    while(l>0) ans.push_back(l--);
    while(r<=m) ans.push_back(r++);
    for(int i=0;i<n;i++)
    {
        cout<<ans[i%m]<<'\n';
    }
    return 0;
}
