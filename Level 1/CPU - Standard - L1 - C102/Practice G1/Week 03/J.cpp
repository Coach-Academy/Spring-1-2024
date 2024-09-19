#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n;
    cin>>n;
    int cnt1=0, cnt2=0, cnt3=0, cnt4=0;
    int ans=0;
    while(n--){
        int g;
        cin>>g;
        if(g==1) cnt1++;
        else if(g==2) cnt2++;
        else if(g==3) cnt3++;
        else cnt4++;
    }
    ans+=cnt4;
    int mnFullof3sAnd1s=min(cnt1, cnt3);
    ans+=mnFullof3sAnd1s;
    int rem1=cnt1-mnFullof3sAnd1s;
    int rem2;
    int rem3=cnt3-mnFullof3sAnd1s;
    if(cnt2%2==0){
        ans+=cnt2/2;
        rem2=0;
    }
    else{
        ans+=cnt2/2;
        rem2=1;
    }
    if(rem3!=0) ans+=rem3;
    ans+=(rem1+2*rem2+3)/4;
    cout<<ans<<'\n';
}