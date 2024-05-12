#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,d;cin>>n>>d;
    int s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    d%=n;
    for(int i=0;i<n;i++)
    {
        cout<<s[(i+d)%n]<<' ';
    }
    return 0;
}
