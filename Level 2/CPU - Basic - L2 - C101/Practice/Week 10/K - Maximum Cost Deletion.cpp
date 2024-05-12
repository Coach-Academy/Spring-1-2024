#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        ll n,a,b;cin>>n>>a>>b;
        vector<char>s(n);
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        s.erase(unique(s.begin(),s.end()),s.end());
        int newN=s.size();
        ll ans=a*n;
        if(b>=0)
        {
            ans+=b*n;
        }
        else
        {
            ans+=(newN/2+1)*b;
        }
        cout<<ans<<'\n';
    }
    return 0;
}
