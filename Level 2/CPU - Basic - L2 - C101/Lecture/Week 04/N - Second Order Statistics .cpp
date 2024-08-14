#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    set<int>st;
    for(int i=0;i<n;i++) // 3 3 3 3 3 3
    {
        int x;cin>>x;
        st.insert(x);
    }
    if(st.size()==1)
    {
        cout<<"NO";
    }
    else
    {
        cout<<*++st.begin();
    }
    return 0;
}
