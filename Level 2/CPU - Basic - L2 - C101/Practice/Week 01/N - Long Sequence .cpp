#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n;cin>>n;
    ll s[n],sum=0;
    for(auto&it:s)
    {
        cin>>it;
        sum+=it;
    }
    ll x;cin>>x;
    ll lafaKamla=x/sum;
    ll newSum=lafaKamla*sum;
    for(int i=0;i<n;i++)
    {
        newSum+=s[i];
        if(newSum>x)
        {
            cout<<i+1+lafaKamla*n;
            return 0;
        }
    }
    return 0;
}
