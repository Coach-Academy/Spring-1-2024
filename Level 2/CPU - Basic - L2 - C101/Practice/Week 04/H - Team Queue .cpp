#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test=0;
    int n;while(cin>>n)
    {
        test++;
        if(n==0) break;
        map<int,int>team;
        for(int i=0;i<n;i++)
        {
            int sz;cin>>sz;while(sz--)
            {
                int x;cin>>x;
                team[x]=i;
            }
        }
        cout<<"Scenario #"<<test<<'\n';
        queue<int>q[n];queue<int>ans;
        string str;while(cin>>str)
        {
            if(str=="STOP") break;
            if(str=="ENQUEUE")
            {
                int x;cin>>x;
                if(q[team[x]].empty())
                {
                    ans.push(x);
                }
                q[team[x]].push(x);
            }
            else
            {
                int tm=team[ans.front()];
                cout<<q[tm].front()<<'\n';
                q[tm].pop();
                if(q[tm].empty())
                {
                    ans.pop();
                }

            }
        }
        cout<<'\n';
    }
    return 0;
}
