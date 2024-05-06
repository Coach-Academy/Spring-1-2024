#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;cin>>s;
    set<char>st(s.begin(),s.end());
    if(st.size()&1)
    {
        cout<<"IGNORE HIM!\n";
    }
    else
    {
        cout<<"CHAT WITH HER!\n";
    }
}
