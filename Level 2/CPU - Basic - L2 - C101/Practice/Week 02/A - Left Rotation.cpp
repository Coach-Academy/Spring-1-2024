#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,d;cin>>n>>d;
    deque<int>dq(n);
    for(int i=0;i<n;i++)
    {
        cin>>dq[i];
    }
    while(d--)
    {
        dq.push_back(dq.front());
        dq.pop_front();
    }
    for(int i=0;i<n;i++)
    {
        cout<<dq[i]<<' ';
    }
}
