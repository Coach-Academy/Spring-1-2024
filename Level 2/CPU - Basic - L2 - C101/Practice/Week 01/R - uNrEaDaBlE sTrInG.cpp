#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(i&1&& islower(s[i]))
        {
            cout<<"No";
            return 0;
        }
        else if(i%2==0&&isupper(s[i]))
        {
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}
