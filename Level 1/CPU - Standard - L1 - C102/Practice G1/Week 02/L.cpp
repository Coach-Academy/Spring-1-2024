#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
//    scanf("%c%c%c", &c1, &c2, &c3);
//    printf("%c %c %c", c1, c2, c3);
    char c1, c2, c3;
    cin>>c1>>c2>>c3;
    if(c1=='R' && c2=='R' && c3=='R') cout<<3<<'\n';
    else if(c1=='R' && c2=='R' || c2=='R' && c3=='R') cout<<2<<'\n';
    else if(c1=='R' || c2=='R' || c3=='R') cout<<1<<'\n';
    else cout<<0<<'\n';
//    cout<<c1<<" "<<c2<<" "<<c3<<'\n';
    return 0;
}
/*
 *
7 7
RRR -> 3
RRS or SRR -> 2
RSR or SSR or RSS or SRS -> 1
SSS -> 0
 */