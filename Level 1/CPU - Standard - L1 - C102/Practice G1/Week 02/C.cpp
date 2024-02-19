#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int a, b;
    cin>>a>>b;
    if(a and !b) cout<<"Gold\n";
    else if(!a and b) cout<<"Silver\n";
    else cout<<"Alloy\n";
    return 0;
}