#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int n;cin>>n;
        set<int>st;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            st.insert(x);
        }
        int ans=0;
        while(st.size())
        {
            auto it=--st.end();
            int x=*it;
            st.erase(it);
            if(x%2==0)
            {
                st.insert(x/2);
                ans++;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}
