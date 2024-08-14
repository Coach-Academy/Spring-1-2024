#include "bits/stdc++.h"
using namespace std;

void TT(){
    int n, m;
    cin>>n>>m;
    int puzzles[m];
    for(int &p:puzzles) cin>>p;
    sort(puzzles, puzzles+m);
    int ans=INT_MAX;
    for(int i=0;i<=m-n;i++)
        ans=min(ans, puzzles[i+n-1]-puzzles[i]);
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