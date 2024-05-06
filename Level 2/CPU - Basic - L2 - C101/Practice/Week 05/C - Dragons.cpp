#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int s,n;cin>>s>>n;
    pair<int,int>dragon[n];
    for(int i=0;i<n;i++)
    {
        cin>>dragon[i].first>>dragon[i].second;
    }
    sort(dragon,dragon+n);
    for(int i=0;i<n;i++)
    {
        auto[x,y]=dragon[i];
        if(s<=x)
        {
            cout<<"NO";
            return 0;
        }
        s+=y;
    }
    cout<<"YES";
    return 0;
}
