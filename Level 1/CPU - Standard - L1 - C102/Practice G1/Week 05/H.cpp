#include "bits/stdc++.h"
using namespace std;

void TT() {
    int arr[4];
    for (int &x : arr) cin>>x;
    sort(arr, arr + 4);
    int ans=0;
    for(int i=1;i<4;i++)
        if(arr[i]==arr[i-1])
            ans++;
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