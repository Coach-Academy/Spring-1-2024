#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string a,b;cin>>a>>b;
    while(a.size()&&b.size()&&a.back()==b.back())
    {
        a.pop_back();
        b.pop_back();
    }
    cout<<a.size()+b.size();
    return 0;
}
