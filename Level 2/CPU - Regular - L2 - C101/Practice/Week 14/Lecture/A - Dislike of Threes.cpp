#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector<int>v;
    for(int i=1;v.size()<1000;i++)
    {
        if(i%3!=0&&i%10!=3)
        {
            v.push_back(i);
        }
    }
    int t;cin>>t;while(t--)
    {
        int x;cin>>x;
        cout<<v[x-1]<<'\n';
    }
    return 0;
}
