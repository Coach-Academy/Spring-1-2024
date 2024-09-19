#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;cin>>s;
    stack<char>st;
    for(int i=0;i<s.size();i++)
    {
        if(st.empty()||st.top()!=s[i])
        {
            st.push(s[i]);
        }
        else
        {
            st.pop();
        }
    }
    if(st.empty())
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }
}
