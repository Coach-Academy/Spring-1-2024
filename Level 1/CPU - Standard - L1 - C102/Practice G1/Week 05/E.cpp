#include "bits/stdc++.h"
using namespace std;

void TT(){
    int n, k, x;
    cin>>n>>k>>x;
    int arr[n];
//    for(int &i:arr) cin>>i;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    for(int i=n-1;i>=0;i--){
        if(k && arr[i]>x) k--, ans+=x;
        else ans+=arr[i];
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