#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int a, b;
    cin>>a>>b;
    int ans=0;
    while(a<=b){
        a*=3;
        b*=2;
        ans++;
    }
    cout<<ans<<'\n';
}