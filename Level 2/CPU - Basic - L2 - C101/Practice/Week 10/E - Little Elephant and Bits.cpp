#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;cin>>s;
    int idx=-1;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            idx=i;
            break;
        }
    }
    if(idx==-1)
    {
        s.pop_back();
        cout<<s;
    }
    else
    {
        for(int i=0;i<idx;i++) cout<<s[i];
        for(int i=idx+1;i<s.size();i++) cout<<s[i];
    }
    return 0;
}
