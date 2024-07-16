#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=5e4+5;
ll n,arr[N][5];
bool compare(int i,int j)
{
    int cnt=0;
    for(int o=0;o<5;o++)
    {
        if(arr[i][o]<arr[j][o])
        {
            cnt++;
        }
    }
    return cnt>=3;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int o=0;o<5;o++)
            {
                cin>>arr[i][o];
            }
        }
        vector<int>idx(n);
        iota(idx.begin(),idx.end(),0);
        sort(idx.begin(),idx.end(),compare);
        int ans=idx[0]+1;
        for(int i=0;i<n;i++)
        {
            if(i!=idx[0]&&!compare(idx[0],i))
            {
                ans=-1;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}
