#include<bits/stdc++.h>
using namespace std;

void TT(){
    int n, k;
    cin>>n>>k;
    int ans = 0;
    while(n--) {
        string s;
        cin >> s;
        int freq[10] = {0};
        for (char c: s) freq[c - '0']++;
        bool flag=false;
        for(int i=0;i<=k;i++)
            if(freq[i]==0)
                flag=true;
        if(!flag) ans++;
    }
    cout<<ans<<'\n';
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int testCases = 1;
//    cin >> testCases;
    while (testCases--) TT();
    return 0;
}
