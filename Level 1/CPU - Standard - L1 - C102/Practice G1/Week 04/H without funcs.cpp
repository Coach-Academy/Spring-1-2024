#include<bits/stdc++.h>
using namespace std;
const int N=1e2+9;
void SS(){
    int n;
    cin>>n;
    int birds[N];
    for(int i=1;i<=n;i++) cin>>birds[i];
    int m;
    cin>>m;
    while(m--){
        int x, y;
        cin>>x>>y;
        birds[x-1]+=(y-1);
        birds[x+1]+=(birds[x]-y);
        birds[x]=0;
    }
    for(int i=1;i<=n;i++) cout<<birds[i]<<'\n';
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
