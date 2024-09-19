#include<bits/stdc++.h>
using namespace std;
#define ll long long
int r[8];
vector<vector<int>>ans;
vector<int>v;
bool valid(int row,int col)
{
    for(int i=0;i<v.size();i++)
    {
        if(row==v[i]) return 0;
        if(abs(v[i]-row)==abs(col-i)) return 0;
    }
    return 1;
}
void solve(int col=0)
{
    if(col==8)
    {
        ans.push_back(v);
    }
    for(int i=0;i<8;i++)
    {
        if(valid(i,col))
        {
            v.push_back(i);
            solve(col+1);
            v.pop_back();
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
    int t=0;
    while(cin>>r[0])
    {
        t++;
        v.clear();
        for(int i=1;i<8;i++)
        {
            cin>>r[i];
        }
        int mn=8;
        for(auto it:ans)
        {
            int c=0;
            for(int o=0;o<8;o++)
            {
                if(it[o]+1!=r[o])
                {
                    c++;
                }
            }
            mn=min(mn,c);
        }
        cout<<"Case "<<t<<": "<<mn<<'\n';
    }
    return 0;
}
