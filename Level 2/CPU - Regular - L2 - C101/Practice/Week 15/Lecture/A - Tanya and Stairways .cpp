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
    vector<int>ans;
    for(int i=1;i<n;i++)
    {
        if(s[i]==1)
        {
            ans.push_back(s[i-1]);
        }
    }
    ans.push_back(s[n-1]);
    cout<<ans.size()<<'\n';
    for(auto it:ans)
    {
        cout<<it<<' ';
    }
    return 0;
}
