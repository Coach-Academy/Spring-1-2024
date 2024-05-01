#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int x;cin>>x;
        int n;cin>>n;
        int s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        string ans="NO\n";
        for(int mask=0;mask<(1<<n);mask++)
        {
            int sum=0;
            for(int i=0;i<n;i++)
            {
                if((mask>>i)&1)
                {
                    sum+=s[i];
                }
            }
            if(sum==x)
            {
                ans="YES\n";
            }
        }
        cout<<ans;
    }
    return 0;
}
