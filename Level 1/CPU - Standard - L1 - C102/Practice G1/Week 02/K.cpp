#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    long long n, k;
    cin>>n>>k;
    if(n%2==0){
        if(k<=n/2) cout<<2*k-1<<'\n';
        else cout<<(k-n/2)*2<<'\n';
    }
    else{
        if(k<=(n+1)/2) cout<<2*k-1<<'\n';
        else cout<<(k-(n+1)/2)*2<<'\n';
    }
    return 0;
}