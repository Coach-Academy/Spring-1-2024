#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    map<string,int>vis;
    for(int i=n-1;i>=0;i--)
    {
        if(vis[s[i]]) continue;
        cout<<s[i]<<'\n';
        vis[s[i]]=1;
    }
}
