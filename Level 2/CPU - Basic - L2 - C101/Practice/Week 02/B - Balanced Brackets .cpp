#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        string s;cin>>s;
        stack<char>st;
        map<char,char>afla;
        afla['(']=')';
        afla['{']='}';
        afla['[']=']';
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='['||s[i]=='{')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.size()&&afla[st.top()]==s[i])
                {
                    st.pop();
                }
                else
                {
                    cout<<"NO\n";
                    goto done;
                }
            }
        }
        if(st.empty())
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        done:{};
    }
}
