#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int n;cin>>n;
        for(int i=0;i<31;i++)
        {
            int x=n^(1<<i);
            if(x<=n&&x>=1)
            {
                cout<<(1<<i)<<' '<<x<<'\n';
                goto done;
            }
        }
        cout<<-1<<'\n';
        done:{};
    }
    return 0;
}
