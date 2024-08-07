#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int n;cin>>n;
        vector<int>a(n),b(n),s(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            s[i]=b[i]-a[i];
        }
        string ans="YES\n";
        for(int i=0;i<n;i++)
        {
            if(s[i]<0)
            {
                ans="NO\n";
                break;
            }
            if(s[i]!=0)
            {
                int o=i+1;
                while(o<n&&s[o]==s[i])
                {
                    o++;
                }
                while(o<n)
                {
                    if(s[o]!=0)
                    {
                        ans="NO\n";
                    }
                    o++;
                }
                break;
            }
        }
        cout<<ans;
    }
    return 0;
}
