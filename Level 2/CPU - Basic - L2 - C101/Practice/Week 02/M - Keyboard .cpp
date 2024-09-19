#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string K="qwertyuiopasdfghjkl;zxcvbnm,./";
    map<char,int>idx;
    for(int i=0;i<K.size();i++)
    {
        idx[K[i]]=i;
    }
    char c;cin>>c;
    string s;cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(c=='L')
        {
            cout<<K[idx[s[i]]+1];
        }
        else
        {
            cout<<K[idx[s[i]]-1];
        }
    }
}
