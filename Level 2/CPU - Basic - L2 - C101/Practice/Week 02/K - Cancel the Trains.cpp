#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int n,m;cin>>n>>m;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            mp[x]++;
        }
        int ans=0;
        for(int i=0;i<m;i++)
        {
            int x;cin>>x;
            if(mp[x]) ans++;
        }
        cout<<ans<<'\n';
    }
}
