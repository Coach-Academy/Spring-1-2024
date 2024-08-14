#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=13;
set<vector<int>,greater<vector<int>>>ans;
int target,n,s[N];
void solve(int i,vector<int>&v,int sum)
{
    if(sum>target) return;
    if(i==n)
    {
        if(sum==target)
        {
            ans.insert(v);
        }
        return;
    }
    v.push_back(s[i]);
    solve(i+1,v,sum+s[i]);
    v.pop_back();
    solve(i+1,v,sum);
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    while(cin>>target)
    {
        if(target==0) break;
        ans.clear();
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        vector<int>v;
        multiset<int>ms(s,s+n);
        solve(0,v,0);
        cout<<"Sums of "<<target<<":\n";
        if(ans.empty())
        {
            cout<<"NONE\n";
        }
        else
        {
            for(auto it:ans)
            {
                for(int i=0;i<it.size();i++)
                {
                    cout<<it[i];
                    if(i!=it.size()-1)
                    {
                        cout<<'+';
                    }
                }
                cout<<'\n';
            }
        }
    }
    return 0;
}
