#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int last=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]-'0'+1!=last)
            {
                cout<<1;
                last=s[i]-'0'+1;
            }
            else
            {
                cout<<0;
                last=s[i]-'0';
            }
        }
        cout<<'\n';
    }
    return 0;
}
