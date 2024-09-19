#include "bits/stdc++.h"
using namespace std;

void TT(){
    int n, mx, mn;
    cin>>n;
    int arr[n], ans=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i==0) mx=mn=arr[i];
        else{
            if(arr[i]>mx) ans++, mx=arr[i];
            if(arr[i]<mn) ans++, mn=arr[i];
        }
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












