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
    int i=0,j=n-1,ans[2]={};
    bool turn=0;
    while(i<=j)
    {
        if(s[i]>=s[j])
        {
            ans[turn]+=s[i];
            i++;
        }
        else
        {
            ans[turn]+=s[j];
            j--;
        }
        turn^=1;
    }
    cout<<ans[0]<<' '<<ans[1];
    return 0;
}
