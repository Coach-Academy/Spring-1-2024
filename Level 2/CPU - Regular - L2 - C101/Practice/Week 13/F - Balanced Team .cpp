#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    sort(s,s+n);
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int l=i,r=n-1,idx=i;
        while(l<=r)
        {
            int mid=l+r>>1;
            if(s[mid]-s[i]<=5)
            {
                idx=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        ans=max(ans,idx-i+1);
    }
    cout<<ans<<'\n';
    return 0;
}
