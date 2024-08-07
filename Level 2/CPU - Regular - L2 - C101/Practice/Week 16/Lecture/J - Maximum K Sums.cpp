#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k;cin>>n>>k;
    ll s[n],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        sum+=s[i];
    }
    set<array<ll,3>,greater<array<ll,3>>>st;
    st.insert({sum,0,n-1});
    while(k--)  
    {
        auto[val,l,r]=*st.begin();
        st.erase(st.begin());
        cout<<val<<' ';
        st.insert({val-s[l],l+1,r});
        st.insert({val-s[r],l,r-1});
    }
    return 0;
}
