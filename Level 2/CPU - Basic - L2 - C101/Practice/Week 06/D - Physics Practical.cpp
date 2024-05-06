#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;cin>>n;
    ll s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    sort(s,s+n);
    ll l=0,r=0,ans=0;
    while(l<n)
    {
        while(r<n&&s[l]*2>=s[r])
        {
            r++;
        }
        ans=max(ans,r-l);
        l++;
    }
    cout<<n-ans;
    return 0;
}
