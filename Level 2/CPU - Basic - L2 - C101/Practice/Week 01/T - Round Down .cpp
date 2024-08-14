#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;cin>>s;
    for(auto it:s)
    {
        if(it=='.') break;
        cout<<it;
    }
    return 0;
}
