#include<bits/stdc++.h>
using namespace std;
bool valid(int x, int n){
    return x>=0 && x<n;
}
void SS(){
    int n;
    cin>>n;
    int birds[n];
    for(int i=0;i<n;i++) cin>>birds[i];
    int m;
    cin>>m;
    while(m--){
        int x, y;
        cin>>x>>y;
        x--;
        if(valid(x-1, n)) birds[x-1]+=(y-1);
        if(valid(x+1, n)) birds[x+1]+=(birds[x]-y);
        birds[x]=0;
    }
    for(int bird:birds) cout<<bird<<'\n';
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int testCases=1;
//    cin>>testCases;
    while(testCases--) SS();
    return 0;
}
