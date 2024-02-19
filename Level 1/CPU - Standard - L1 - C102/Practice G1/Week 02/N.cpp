#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int v, t, s, d;
    cin>>v>>t>>s>>d;
    int distBegin=v*t;
    int distEnd=v*s;
    if(d>=distBegin && d<=distEnd) cout<<"No\n";
    else cout<<"Yes\n";
    return 0;
}