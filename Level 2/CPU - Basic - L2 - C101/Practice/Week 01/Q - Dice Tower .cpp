#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int top;cin>>top;
    int op=7-top;
    while(n--)
    {
        int a,b;cin>>a>>b;
        if(a==top||b==top||a+b==7||a==op||b==op)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
