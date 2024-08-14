#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int s[n];
    vector<int>pos,neg,zero;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        if(s[i]==0) zero.push_back(0);
        else if(s[i]>0) pos.push_back(s[i]);
        else neg.push_back(s[i]);
    }
    if(pos.empty())
    {
        pos.push_back(neg.back());
        neg.pop_back();
        pos.push_back(neg.back());
        neg.pop_back();
    }
    if(neg.size()%2==0)
    {
        zero.push_back(neg.back());
        neg.pop_back();
    }
    cout<<neg.size()<<' ';for(auto it:neg) cout<<it<<' '; cout<<'\n';
    cout<<pos.size()<<' ';for(auto it:pos) cout<<it<<' '; cout<<'\n';
    cout<<zero.size()<<' ';for(auto it:zero) cout<<it<<' '; cout<<'\n';
}
