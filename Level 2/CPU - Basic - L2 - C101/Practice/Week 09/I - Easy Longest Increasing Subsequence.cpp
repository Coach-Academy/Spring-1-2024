#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int ans=1;
    for(int mask=0;mask<(1<<n);mask++)
    {
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            if((mask>>i)&1)
            {
                v.push_back(s[i]);
            }
        }
        bool can=1;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]<=v[i-1])
            {
                can=0;
            }
        }
        if(can)
        {
            ans=max(ans,(int)v.size());
        }
    }
    cout<<ans;
    return 0;
}
