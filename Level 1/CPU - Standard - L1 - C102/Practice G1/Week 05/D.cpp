#include "bits/stdc++.h"
using namespace std;

void TT(){
    int n, m;
    cin>>n>>m;
    int diff[n];
    long long sum=0;
    for(int i=0;i<n;i++){
        int a, b;
        cin>>a>>b;
        sum+=a;
        diff[i]=a-b;
    }
    if(sum<=m) return void(cout<<"0\n");
    sort(diff, diff+n);
    reverse(diff, diff+n);
    int numOfCompressedSongs=0;
    for(int i=0;i<n;i++){
        sum-=diff[i];
        numOfCompressedSongs++;
        if(sum<=m) return void(cout<<numOfCompressedSongs<<"\n");
    }
    cout<<"-1\n";
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