#include<bits/stdc++.h>
using namespace std;
const int N=1e2+9;
void SS(){
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    for(int i=0;i<s.size()-1;i++){
        if(s[i+1]-s[i]==1) continue;
        return void(cout<<"No\n");
    }
    cout<<"Yes\n";
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int testCases=1;
    cin>>testCases;
    while(testCases--) SS();
    return 0;
}
