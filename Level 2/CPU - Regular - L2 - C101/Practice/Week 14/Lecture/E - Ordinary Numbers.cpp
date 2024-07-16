#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int>ord;
void init()
{
    for(int sz=1;sz<=9;sz++)
    {
        for(int dig=1;dig<=9;dig++)
        {
            ord.push_back(stoi(string(sz,char(dig+'0'))));
        }
    }
    sort(ord.begin(),ord.end());
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    init();
    int t;cin>>t;while(t--)
    {
        int n;cin>>n;
        int ans=0;
        for(auto it:ord)
        {
            ans+=it<=n;
        }
        cout<<ans<<'\n';
    }
    return 0;
}
