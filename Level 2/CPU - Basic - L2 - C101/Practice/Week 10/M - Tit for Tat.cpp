#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int n,k;cin>>n>>k;
        int s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        for(int i=0;i<n;i++)
        {
            while(k&&s[i])
            {
                k--;
                s[i]--;
                s[n-1]++;
            }
        }
        for(auto it:s) cout<<it<<' ';
        cout<<'\n';
    }
    return 0;
}
