#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int x;
    cin>>x;
    if(x>=90) cout<<"expert";
    else if(x>=70) cout<<90-x;
    else if(x>=40) cout<<70-x;
    else cout<<40-x;

    return 0;
}