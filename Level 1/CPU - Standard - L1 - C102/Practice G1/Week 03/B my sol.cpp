#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    int n=26;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        cout<<char('a'+p-1);
    }
}