#include<bits/stdc++.h>
using namespace std;
const int N=1e2+9;
void SS(){
    int n;
    cin>>n;
    int mx=INT_MIN, mn=INT_MAX, indexMx=0, indexMn=-1;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>mx) mx=arr[i];
        if(arr[i]<mn) mn=arr[i];        // mn=min(arr[i], mn);
    }
    for(int i=0;i<n;i++){
        if(arr[i]==mx && indexMx==0) indexMx=i+1;
        if(arr[i]==mn) indexMn=i+1;
    }
//    cout<<mx<<" "<<mn<<'\n';
//    cout<<indexMx<<" "<<indexMn<<'\n';
    int ans=n-indexMn + indexMx-1;
    if(indexMx>indexMn) ans--;
    cout<<ans<<'\n';
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
