#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,d;cin>>n>>d;
    int s[n];
    map<int,int>idx;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        idx[s[i]]=i;
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int a=idx[s[i]+d];
        int b=idx[s[i]+d+d];
        if(a>i&&b>a)
        {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
