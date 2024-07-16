#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int sx,sy,ex,ey;cin>>sx>>sy>>ex>>ey;
    cout<<(sx!=ex)+(sy!=ey)<<' '; // rook
    if((sx+sy)%2 != (ex+ey)%2) cout<<0<<' '; // bishop
    else if(abs(sx-ex) == abs(sy-ey)) cout<<1<<' ';
    else cout<<2<<' ';
    cout<<max(abs(sx-ex),abs(sy-ey)); // king
    return 0;
}
