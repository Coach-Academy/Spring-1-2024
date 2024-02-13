#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    string s;cin>>s;
    int ans=s.size();
    s.erase(unique(s.begin(),s.end()),s.end());
    cout<<ans-s.size();
    return 0;
}
