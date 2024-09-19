#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    stack<string>st;
    string s="";
    int t;cin>>t;while(t--)
    {
        int op;cin>>op;
        if(op==1)
        {
            st.push(s);
            string w;cin>>w;
            s+=w;
        }
        else if(op==2)
        {
            st.push(s);
            int k;cin>>k;while(k--)
            {
                s.pop_back();
            }
        }
        else if(op==3)
        {
            int idx;cin>>idx;
            cout<<s[idx-1]<<'\n';
        }
        else
        {
            s=st.top();
            st.pop();
        }
    }
}
