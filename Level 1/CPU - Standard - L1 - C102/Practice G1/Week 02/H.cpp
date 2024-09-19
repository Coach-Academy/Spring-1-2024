#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int k, x;
    cin>>k>>x;
    if(k*500>=x) cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}