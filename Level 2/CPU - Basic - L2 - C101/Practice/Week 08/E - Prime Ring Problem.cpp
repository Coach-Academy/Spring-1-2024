#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool isPrime(int n)
{
    return n==2||n==3||n==5||n==7||n==11||n==13||n==17||n==19||n==23||n==29||n==31;
}
vector<vector<int>>ans;
int n;
void solve(vector<int>&v,set<int>&st)
{
    if(st.empty())
    {
        if(isPrime(v.back()+v.front()))
        {
            ans.push_back(v);
        }
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(st.count(i)&&isPrime(i+v.back()))
        {
            st.erase(i);
            v.push_back(i);
            solve(v,st);
            st.insert(i);
            v.pop_back();
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test=0;
    while(cin>>n)
    {
        if(test) cout<<'\n';
        test++;
        ans.clear();
        set<int>st;
        for(int i=2;i<=n;i++)
        {
            st.insert(i);
        }
        vector<int>v={1};
        solve(v,st);
        cout<<"Case "<<test<<":\n";
        for(auto it:ans)
        {
            for(int i=0;i<n;i++)
            {
                cout<<it[i];
                if(i!=n-1) cout<<' ';
            }
            cout<<'\n';
        }
    }
    return 0;
}
