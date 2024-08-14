#include "bits/stdc++.h"
using namespace std;

void TT() {
    int n;
    cin>>n;
    int curCap=0, ans=0;
    for(int i=0;i<n;i++){
        int a, b;
        cin>>a>>b;
        curCap-=a;
        curCap+=b;
        ans=max(ans, curCap);
    }
    cout<<ans<<'\n';
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