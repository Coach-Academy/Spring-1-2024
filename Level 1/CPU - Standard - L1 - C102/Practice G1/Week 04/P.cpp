#include<bits/stdc++.h>
using namespace std;
const int N=1e2+9;
void SS(){
    int n, k, ans=0;
    cin>>n>>k;
    while(n--){
        string s;
        cin>>s;
        bool flag= true;
        for(int digit=0;digit<=k;digit++){
            char d=char(digit+'0');
            if(s.find(d)!=string::npos) continue;
            flag=false;
        }
        if(flag) ans++;
    }
    cout<<ans<<'\n';
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
