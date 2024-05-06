#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n;cin>>n;
    vector<ll>s;
    for(int bt=1;bt<=10;bt++)
    {
        for(int mask=0;mask<(1<<bt);mask++)
        {
            ll x=0,sev=0,four=0;
            for(int i=0;i<bt;i++)
            {
                x*=10;
                if((mask>>i)&1)
                {
                    sev++;
                    x+=7;
                }
                else
                {
                    four++;
                    x+=4;
                }
            }
            if(sev==four)
            {
                s.push_back(x);
            }
        }
    }
    sort(s.begin(),s.end());
    cout<<*lower_bound(s.begin(),s.end(),n);
    return 0;
}
