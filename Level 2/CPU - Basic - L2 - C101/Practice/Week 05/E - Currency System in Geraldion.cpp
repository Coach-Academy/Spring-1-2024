#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    sort(s,s+n);
    if(s[0]==1)
    {
        cout<<-1;
    }
    else
    {
        cout<<1;
    }
    return 0;
}
