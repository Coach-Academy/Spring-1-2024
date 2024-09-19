#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n, totImplProblems=0;
    cin>>n;
    while(n--){
        int a, b, c;
        cin>>a>>b>>c;
        if(a==b && a || a==c && a || b==c && b) totImplProblems++;
    }
    cout<<totImplProblems<<'\n';
}