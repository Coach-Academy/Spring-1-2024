#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=21;
int n,target,s[N];
bool solve(int i=0,int sum=0)
{
    if(sum>target) return 0;
    if(i==n) return target==sum;
    return max(solve(i+1,sum),solve(i+1,sum+s[i]));
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        cin>>target>>n;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        if(solve())
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
