#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n;
    cin>>n;
    int curTotCubes=0, curLevel=0, curH=0, nxtH=1;
    while(curTotCubes<=n){
        curLevel+=nxtH;
        curTotCubes+=curLevel;
        nxtH++;
        curH++;
    }
    cout<<curH-1<<'\n';
}