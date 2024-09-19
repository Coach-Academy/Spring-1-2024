#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool isPalindeome(string s)
{
    for(int i=0;i<s.size()/2;i++)
    {
        if(s[i]!=s[s.size()-i-1]) return 0;
    }
    return 1;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;cin>>s;
    while(s.size()&&s.back()=='0') s.pop_back();
    reverse(s.begin(),s.end());
    while(s.size()&&s.back()=='0') s.pop_back();
    if(isPalindeome(s))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}
