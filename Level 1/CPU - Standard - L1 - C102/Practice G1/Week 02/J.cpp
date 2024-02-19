#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int a, b, c;
    /*
     * c = 0            -->         false
     * if(!false){}
     * c = !0 -> 1 -> true  -> !false
     * if(0==0) {
     *
     * }
     * if(!c)
     */
    cin>>a>>b>>c;
    if(a==b){
        if(c==0) cout<<"Aoki\n";
        else cout<<"Takahashi\n";
    }
    else if (a>b) cout<<"Takahashi\n";
    else cout<<"Aoki\n";
    return 0;
}