#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        ll a,b;cin>>a>>b;
        if(b%a==0)
        {
            cout<<a<<' '<<b<<'\n';
        }
        else
        {
            cout<<-1<<'\n';
        }
    }
    return 0;
}
