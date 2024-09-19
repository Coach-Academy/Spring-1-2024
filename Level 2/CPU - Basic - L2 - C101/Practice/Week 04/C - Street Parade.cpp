#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;while(cin>>n)
    {
        if(n==0) break;
        int s[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>s[i];
        }
        stack<int>st;int idx=1;
        for(int i=1;i<=n;i++)
        {
            bool did=1;
            if(s[i]==idx)
            {
                idx++;
                did=0;
            }
            while(st.size()&&st.top()==idx)
            {
                idx++;
                st.pop();
            }
            if(s[i]!=idx&&did)
            {
                st.push(s[i]);
            }
        }
        while(st.size()&&st.top()==idx)
        {
            idx++;
            st.pop();
        }
        if(idx==n+1)
        {
            cout<<"yes\n";
        }
        else
        {
            cout<<"no\n";
        }
    }
    return 0;
}
