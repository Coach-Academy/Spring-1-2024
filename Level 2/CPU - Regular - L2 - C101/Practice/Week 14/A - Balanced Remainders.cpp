#include<bits/stdc++.h>
using namespace std;
#define ll long long
int sub(int a,int b,int mod)
{
    return ((((a%mod)-(b%mod))%mod)+mod)%mod;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int n;cin>>n;
        int f[3]={};
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            f[x%3]++;
        }
        int target=n/3,ans=0;
        for(int i=0;i<3;i++)
        {
            while(f[i]<target)
            {
                f[i]++;
                f[sub(i,1,3)]--;
                ans++;
            }
        }
        for(int i=0;i<3;i++)
        {
            while(f[i]<target)
            {
                f[i]++;
                f[sub(i,1,3)]--;
                ans++;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}
