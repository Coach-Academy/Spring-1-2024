#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    ll s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    sort(s,s+n);
    int i=0,j=(n+1)/2,c=0;
    while(j<n)
    {
        if(s[j]>=2*s[i])
        {
            i++;
            c++;
        }
        j++;
    }
    cout<<n-c;
    return 0;
}
