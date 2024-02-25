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
        if(a+b+c>=2) totImplProblems++;
    }
    cout<<totImplProblems<<'\n';
}