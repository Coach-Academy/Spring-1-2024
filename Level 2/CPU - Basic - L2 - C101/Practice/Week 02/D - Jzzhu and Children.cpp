#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;cin>>n>>m;
    int s[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
    }
    deque<int>d(n);
    iota(d.begin(),d.end(),1);
    while(d.size()>1)
    {
        int idx=d.front();
        d.pop_front();
        s[idx]-=m;
        if(s[idx]>0)
        {
            d.push_back(idx);
        }
    }
    cout<<d.front();
}
