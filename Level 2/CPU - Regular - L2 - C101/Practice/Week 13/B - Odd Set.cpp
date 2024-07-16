#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int n;cin>>n;
        int o=0,e=0;
        for(int i=0;i<n+n;i++)
        {
            int x;cin>>x;
            if(x%2==0) e++;
            else o++;
        }
        if(e==o){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}
