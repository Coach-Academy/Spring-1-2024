#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n, m, a;
    cin>>n>>m>>a;
    int l = n/a;
    if(n%a) l++;
    int w = m/a;
    if(m%a) w++;
    cout<<(long long)l*w<<'\n';
    return 0;
}