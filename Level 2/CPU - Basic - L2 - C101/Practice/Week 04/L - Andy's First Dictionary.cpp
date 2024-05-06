#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tlower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    set<string>st;
    string s;while(cin>>s)
    {
        string cur="";
        for(int i=0;i<s.size();i++)
        {
            if(isalpha(s[i]))
            {
                cur.push_back(s[i]);
            }
            else
            {
                if(cur.size())
                {
                    tlower(cur);
                    st.insert(cur);
                    cur="";
                }
            }
        }
        if(cur.size())
        {
            tlower(cur);
            st.insert(cur);
        }
    }
    for(auto it:st)
    {
        cout<<it<<'\n';
    }
    return 0;
}
