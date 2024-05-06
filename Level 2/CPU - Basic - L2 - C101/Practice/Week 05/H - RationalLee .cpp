#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
//    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int n,k;cin>>n>>k;
        int a[n],b[k];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<k;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n,greater<int>());
        sort(b,b+k);
        ll ans=0;
        multiset<int>ms[k];
        for(int i=0;i<k;i++)
        {
            ms[i].insert(a[i]);
        }
        int last=k;
        for(int i=0;i<k;i++)
        {
            if(b[i]==1)
            {
                continue;
            }
            for(int j=1;j<b[i];j++)
            {
                ms[i].insert(a[last]);
                last++;
            }
        }
        for(int i=0;i<k;i++)
        {
            ans+=*ms[i].rbegin()+*ms[i].begin();
        }
        cout<<ans<<'\n';
    }
    return 0;
}
