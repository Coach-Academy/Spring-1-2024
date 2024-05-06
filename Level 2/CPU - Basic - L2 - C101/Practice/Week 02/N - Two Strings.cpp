#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        string s,f;cin>>s>>f;
        map<char,int>m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]=1;
        }
        for(int i=0;i<f.size();i++)
        {
            if(m[f[i]])
            {
                cout<<"YES\n";
                goto done;
            }
        }
        cout<<"NO\n";
        done:{};
    }
}
