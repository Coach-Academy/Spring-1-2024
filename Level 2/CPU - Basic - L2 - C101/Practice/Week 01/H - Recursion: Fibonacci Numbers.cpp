#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
ll solve(int n)
{
    if(n==0||n==1) return n;
    return solve(n-1)+solve(n-2);
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    cout<<solve(n);
    return 0;
}
