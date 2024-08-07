#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool in_grid(int x,int y,int n,int m)
{
    return x>=0&&y>=0&&x<n&&y<m;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int n,m;cin>>n>>m;
        char s[n][m];
        for(int i=0;i<n;i++)
        {
            for(int o=0;o<m;o++)
            {
                cin>>s[i][o];
            }
        }
        vector<array<int,4>>ans;
        for(int i=n-1;i>=0;i--)
        {
            for(int o=m-1;o>=0;o--)
            {
                if(s[i][o]=='1')
                {
                    if(in_grid(i-1,o,n,m))
                    {
                        ans.push_back({i-1,o,i,o});
                    }
                    else if(in_grid(i,o-1,n,m))
                    {
                        ans.push_back({i,o-1,i,o});
                    }
                    else
                    {
                        cout<<-1<<'\n';
                        goto done;
                    }
                }
            }
        }
        cout<<ans.size()<<'\n';
        for(auto[a,b,c,d]:ans)
        {
            cout<<a+1<<' '<<b+1<<' '<<c+1<<' '<<d+1<<'\n';
        }
        done:{};
    }
    return 0;
}
