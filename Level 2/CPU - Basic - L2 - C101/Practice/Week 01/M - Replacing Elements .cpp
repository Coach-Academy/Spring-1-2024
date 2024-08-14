#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int n,d;cin>>n>>d;
        int s[n];
        for(auto&it:s)
        {
            cin>>it;
        }
        sort(s,s+n);
        if(s[n-1]<=d||s[0]+s[1]<=d)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
