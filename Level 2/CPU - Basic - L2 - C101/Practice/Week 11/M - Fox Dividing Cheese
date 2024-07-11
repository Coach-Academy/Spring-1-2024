#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll a,b;cin>>a>>b;
    int t1=0,t2=0;
    while(a%2==0) a/=2,t1++;
    while(b%2==0) b/=2,t2++;

    int th1=0,th2=0;
    while(a%3==0) a/=3,th1++;
    while(b%3==0) b/=3,th2++;

    int f1=0,f2=0;
    while(a%5==0) a/=5,f1++;
    while(b%5==0) b/=5,f2++;

    if(a==b)
    {
        cout<<abs(t1-t2)+abs(th1-th2)+abs(f1-f2);
    }
    else
    {
        cout<<-1;
    }
    return 0;
}
