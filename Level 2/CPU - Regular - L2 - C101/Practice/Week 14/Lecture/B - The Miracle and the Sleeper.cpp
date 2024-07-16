#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int l,r;cin>>l>>r;
        if(l>r/2)
        {
            cout<<r-l<<'\n';
        }
        else
        {
            cout<<r/2-(r%2==0)<<'\n';
        }
    }
    return 0;
}
