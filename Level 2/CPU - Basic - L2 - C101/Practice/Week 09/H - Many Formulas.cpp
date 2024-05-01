#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;cin>>s;
    int pl=s.size()-1;
    ll ans=0;
    for(int mask=0;mask<(1<<pl);mask++)
    {
        ll sum=s[0]-'0';
        for(int i=0;i<pl;i++)
        {
            if((mask>>i)&1)
            {
                ans+=sum;
                sum=s[i+1]-'0';
            }
            else
            {
                sum*=10;
                sum+=s[i+1]-'0';
            }
        }
        ans+=sum;
    }
    cout<<ans;
    return 0;
}
