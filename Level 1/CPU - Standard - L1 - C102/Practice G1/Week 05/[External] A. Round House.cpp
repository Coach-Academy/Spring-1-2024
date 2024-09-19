#include "bits/stdc++.h"
using namespace std;

void TT() {
    int n, a, b;
    cin>>n>>a>>b;
    int ans=((a+b)%n+n)%n;
    if(ans==0) cout<<n<<'\n';
    else cout<<ans<<'\n';
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int t=1;
//    cin>>t;
    while(t--) TT();
    return 0;
}