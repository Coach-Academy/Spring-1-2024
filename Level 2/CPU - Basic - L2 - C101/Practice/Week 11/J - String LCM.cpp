#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        string a,b;cin>>a>>b;
        string ta=a,tb=b;
        int sz=lcm(a.size(),b.size());
        while(a.size()<sz)
        {
            a+=ta;
        }
        while(b.size()<sz)
        {
            b+=tb;
        }
        if(a==b)
        {
            cout<<a<<'\n';
        }
        else
        {
            cout<<-1<<'\n';
        }
    }
    return 0;
}
