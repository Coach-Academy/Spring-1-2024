#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int n;cin>>n;
        ll s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        sort(s,s+n);
        int l=2,r=n-2,cntRed=1,cntBlue=2;
        ll red=s[n-1],blue=s[0]+s[1];
        while(l<=r)
        {
            if(red>blue)
            {
                if(cntRed<cntBlue)
                {
                    cout<<"YES\n";
                    goto done;
                }
                else
                {
                    blue+=s[l];
                    l++;
                    cntBlue++;
                }
            }
            else
            {
                red+=s[r];
                r--;
                cntRed++;
            }
        }
        if(red>blue&&cntRed<cntBlue)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        done:{};
    }
    return 0;
}
