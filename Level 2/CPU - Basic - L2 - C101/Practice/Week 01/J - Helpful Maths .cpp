#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;cin>>s;
    int one=0,two=0,three=0;
    for(int i=0;i<s.size();i+=2)
    {
        if(s[i]=='1') one++;
        else if(s[i]=='2') two++;
        else three++;
    }
    string ans="";
    while(one--) ans.push_back('1'),ans.push_back('+');
    while(two--) ans.push_back('2'),ans.push_back('+');
    while(three--) ans.push_back('3'),ans.push_back('+');
    ans.pop_back();
    cout<<ans;
    return 0;
}
