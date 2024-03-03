#include<bits/stdc++.h>
using namespace std;

void TT(){
    string s;
    cin>>s;
    int freq[26]={0};
    bool flag=true;
    for(char c:s){
        freq[c-'a']++;
        if(freq[c-'a']==2) flag=false;
    }
    int cnt=0, components=0;
    for(int i : freq){
        if(i) cnt++;
        else if(cnt) components++, cnt=0;
    }
    if(cnt) components++;
    if(components!=1) flag=false;
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int testCases = 1;
    cin >> testCases;
    while (testCases--) TT();
    return 0;
}
