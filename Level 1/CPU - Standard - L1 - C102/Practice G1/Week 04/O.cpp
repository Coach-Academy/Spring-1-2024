#include<bits/stdc++.h>
using namespace std;
bool check(string&s){
    for(int i=0;i<s.size()/2;i++)
        if(s[i] != s[s.size()-1-i])
            return false;
    return true;
}
void SS(){
    string s;
    cin>>s;
    for(int i=0;i<10;i++)
        if(check(s)) return void(cout<<"Yes\n");
        else s="0"+s;
    cout<<"No\n";
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
