#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    pair<int,int>s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i].first>>s[i].second;
    }
    sort(s,s+n);
    int cur=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(s[i].second>=cur)
        {
            cur=s[i].second;
        }
        else
        {
            cur=s[i].first;
        }
    }
    cout<<cur;
    return 0;
}
