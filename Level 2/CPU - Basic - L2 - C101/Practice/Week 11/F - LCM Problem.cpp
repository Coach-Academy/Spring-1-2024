#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int a,b;cin>>a>>b;
        int x=b/2*2;
        if(x/2>=a)
        {
            cout<<x/2<<' '<<x<<'\n';
        }
        else
        {
            cout<<"-1 -1\n";
        }
    }
    return 0;
}
