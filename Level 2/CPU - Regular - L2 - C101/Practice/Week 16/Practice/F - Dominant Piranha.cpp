#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int n;cin>>n;
        int s[n],mx=0;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
            mx=max(mx,s[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]==mx)
            {
                if(i+1<n&&s[i+1]!=mx)
                {
                    cout<<i+1<<'\n';
                    goto done;
                }
                if(i-1>=0&&s[i-1]!=mx)
                {
                    cout<<i+1<<'\n';
                    goto done;
                }
            }
        }
        cout<<-1<<'\n';
        done:{};
    }
    return 0;
}
