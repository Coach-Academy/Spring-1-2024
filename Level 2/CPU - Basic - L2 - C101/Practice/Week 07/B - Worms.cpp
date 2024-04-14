#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    ll s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        if(i) s[i]+=s[i-1];
    }
    int q;cin>>q;while(q--)
    {
        int x;cin>>x;
        int l=0,r=n-1,ans=1;
        while(l<=r)
        {
            int mid=l+r>>1;
            if(s[mid]>=x)
            {
                ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        cout<<ans+1<<'\n';
    }
    return 0;
}
