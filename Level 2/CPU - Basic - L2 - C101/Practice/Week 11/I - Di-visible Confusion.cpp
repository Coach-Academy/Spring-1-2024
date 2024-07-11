#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int n;cin>>n;
        ll s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        ll lc=2,idx=2;
        for(int i=0;i<n;i++)
        {
            if(s[i]%lc==0)
            {
                cout<<"NO\n";
                goto done;
            }
            idx++;
            lc=lcm(lc,idx);
            if(lc>1e9) break;
        }
        cout<<"YES\n";
        done:{};
    }
    return 0;
}
