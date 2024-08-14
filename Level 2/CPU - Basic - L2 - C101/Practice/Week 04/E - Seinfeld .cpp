#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test=0;
    string s;while(cin>>s)
    {
        test++;
        if(s[0]=='-') break;
        stack<char>st;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='{')
            {
                st.push('{');
            }
            else
            {
                if(st.size())
                {
                    st.pop();
                }
                else
                {
                   st.push('{');
                   ans++;
                }
            }
        }
        cout<<test<<". "<<ans+st.size()/2<<'\n';
    }
    return 0;
}
