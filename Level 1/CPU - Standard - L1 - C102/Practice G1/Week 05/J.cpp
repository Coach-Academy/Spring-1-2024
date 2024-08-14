#include "bits/stdc++.h"
using namespace std;
int n;
bool isEqual(int arr[], int arr2[]){
    for(int i=0;i<n;i++)
        if(arr[i]!=arr2[i])
            return false;
    return true;
}
void TT() {
    cin>>n;
    int p[n], q[n], initialP[n];
    for(int i=0;i<n;i++) initialP[i]=i+1;
    for(int &e:p) cin>>e;
    for(int &e:q) cin>>e;
    int order=1, a, b;
    do{
        if(isEqual(p, initialP)) a=order;
        if(isEqual(q, initialP)) b=order;
        order++;
    }while(next_permutation(initialP, initialP+n));
    cout<<abs(a-b)<<'\n';
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