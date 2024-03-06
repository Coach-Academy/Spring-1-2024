#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    deque<int>d;bool rev=0;
    int q;cin>>q;while(q--)
    {
        string op;cin>>op;
        if(op=="back")
        {
            if(d.empty())
            {
                cout<<"No job for Ada?\n";
                continue;
            }
            if(rev)
            {
                cout<<d.front()<<'\n';
                d.pop_front();
            }
            else
            {
                cout<<d.back()<<'\n';
                d.pop_back();
            }
        }
        else if(op=="front")
        {
            if(d.empty())
            {
                cout<<"No job for Ada?\n";
                continue;
            }
            if(!rev)
            {
                cout<<d.front()<<'\n';
                d.pop_front();
            }
            else
            {
                cout<<d.back()<<'\n';
                d.pop_back();
            }
        }
        else if(op=="reverse")
        {
            rev^=1;
        }
        else if(op=="push_back")
        {
            int n;cin>>n;
            if(rev)
            {
                d.push_front(n);
            }
            else
            {
                d.push_back(n);
            }
        }
        else
        {
            int n;cin>>n;
            if(!rev)
            {
                d.push_front(n);
            }
            else
            {
                d.push_back(n);
            }
        }
    }
    return 0;
}
