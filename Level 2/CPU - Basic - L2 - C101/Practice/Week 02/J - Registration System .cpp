#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    map<string,int>m;
    int t;cin>>t;while(t--)
    {
        string s;cin>>s;
        if(!m[s])
        {
            cout<<"OK\n";
        }
        else
        {
            cout<<s<<m[s]<<'\n';
        }
        m[s]++;
    }
}
