#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n;
    cin>>n;
    if(n%10 == n/100) cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}