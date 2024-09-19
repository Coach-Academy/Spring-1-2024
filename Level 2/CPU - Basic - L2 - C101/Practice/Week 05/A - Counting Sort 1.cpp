#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int frq[100]={};
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        frq[x]++;
    }
    for(int i=0;i<100;i++)
    {
         cout<<frq[i]<<' ';
    }
    return 0;
}
