#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+5;
int n;string a[N];ll b[N];char c[N];
int can(ll mid)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]=="<"&&mid>=b[i]) return -1;
        else if(a[i]==">"&&mid<=b[i]) return 1;
        else if(a[i]=="<="&&mid>b[i]) return -1;
        else if(a[i]==">="&&mid<b[i]) return 1;
    }
    return 0;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
    }
    for(int i=0;i<n;i++)
    {
        if(c[i]=='N')
        {
            if(a[i]=="<") a[i]=">=";
            else if(a[i]==">") a[i]="<=";
            else if(a[i]=="<=") a[i]=">";
            else a[i]="<";
        }
    }
    ll l=-2e9,r=2e9;
    while(l<=r)
    {
        ll mid=l+r>>1;
        if(can(mid)==0)
        {
            cout<<mid;
            return 0;
        }
        else if(can(mid)==1)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    cout<<"Impossible";
    return 0;
}
