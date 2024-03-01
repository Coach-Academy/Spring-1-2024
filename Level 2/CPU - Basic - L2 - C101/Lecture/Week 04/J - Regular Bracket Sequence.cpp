#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;cin>>s;
    int ans=0;
    stack<char>st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        {
            st.push(s[i]);
        }
        else
        {
            if(st.size())
            {
                st.pop();
                ans+=2;
            }
        }
    }
    cout<<ans<<'\n';
    return 0;
}
