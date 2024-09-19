#include<bits/stdc++.h>
using namespace std;
const int N=1e2+9;
void SS(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
        s[i]= tolower(s[i]);
    for(char c='a';c<='z';c++){
        int cnt=int(count(s.begin(), s.end(), c));
        if(cnt>=1) continue;
        cout<<"NO";
        return;
    }
    cout<<"YES\n";
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
