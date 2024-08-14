#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n, cnt=0;
    cin>>n;
    while(n--){
        int p, q;
        cin>>p>>q;
        if(q-p>=2) cnt++;
    }
    cout<<cnt<<'\n';
}