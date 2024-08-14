#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k;cin>>n>>k;
    map<int,int>m; // element , index
    for(int i=1;i<=n;i++)
    {
        int x;cin>>x;
        m[x]=i;
    }
    if(m.size()<k)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES\n";
        int c=0;
        for(auto[a,b]:m)
        {
            cout<<b<<' ';
            c++;
            if(c==k)
            {
                break;
            }
        }
    }
    return 0;
}
