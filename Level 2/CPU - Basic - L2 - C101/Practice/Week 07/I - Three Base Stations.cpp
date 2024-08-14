#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+5;
double s[N];
int n;
bool can(double mid)
{
    int borg=2;double last=s[0]+2*mid;
    for(int i=1;i<n;i++)
    {
        if(s[i]<=last) continue;
        borg--;
        last=s[i]+2*mid;
    }
    return borg>=0;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    sort(s,s+n);
    int iterations=300;
    double l=0,r=1e10,ans=0;
    while(iterations--&&l<=r)
    {
        double mid=(l+r)/2;
        if(can(mid))
        {
            ans=mid;
            r=mid;
        }
        else
        {
            l=mid;
        }
    }
    cout<<fixed<<setprecision(6)<<ans<<'\n';
    cout<<fixed<<setprecision(6)<<s[0]+ans<<' ';
    double last=s[0]+2*ans;
    int borg=2;
    for(int i=1;i<n;i++)
    {
        if(s[i]<=last) continue;
        borg--;
        cout<<fixed<<setprecision(6)<<s[i]+ans<<' ';
        last=s[i]+2*ans;
    }
    while(borg>0) borg--,cout<<1<<' ';
    return 0;
}
