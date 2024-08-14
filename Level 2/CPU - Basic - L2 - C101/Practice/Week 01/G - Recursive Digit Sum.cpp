#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string n;ll k;
    cin>>n>>k;
    ll sum=0;
    for(int i=0;i<n.size();i++)
    {
        sum+=n[i]-'0';
    }
    sum*=k;
    string s= to_string(sum);
    while(s.size()!=1)
    {
        sum=0;
        for(int i=0;i<s.size();i++)
        {
            sum+=s[i]-'0';
        }
        s= to_string(sum);
    }
    cout<<s;
    return 0;
}
