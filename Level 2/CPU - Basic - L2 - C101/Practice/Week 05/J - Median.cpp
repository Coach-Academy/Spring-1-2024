#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k;cin>>n>>k;
    vector<int>s(n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    sort(s.begin(),s.end());
    int ans=0;
    while(s[(n+1)/2-1]!=k)
    {
        s.push_back(k);
        n++;
        ans++;
        sort(s.begin(),s.end());
    }
    cout<<ans;
    return 0;
}
