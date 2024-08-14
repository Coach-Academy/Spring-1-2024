#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int n;cin>>n;
        int s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        map<int,bool>vis;
        for(int i=0;i<n;i++)
        {
            if(vis[s[i]])
            {
                cout<<"ne krasivo\n";
                goto done;
            }
            vis[s[i]]=1;
        }
        cout<<"prekrasnyy\n";
        done:{};
    }
    return 0;
}
