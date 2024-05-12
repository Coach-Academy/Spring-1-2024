#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int k,n;cin>>k>>n;
    int s[n],ans=1e9;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    sort(s,s+n);
    for(int i=k-1;i<n;i++)
    {
        ans=min(ans,s[i]-s[i-(k-1)]);
    }
    cout<<ans;
    return 0;
}
