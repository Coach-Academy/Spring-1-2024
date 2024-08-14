#include<bits/stdc++.h>
using namespace std;
bool valid(int x, int y, int n, int m){
    return x>=0 && x<n && y>=0 && y<m;
}
void SS(){
    int buttons[3][3], lights[3][3];
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            lights[i][j]=1;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>buttons[i][j], buttons[i][j]%=2;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(buttons[i][j]){
//                cout<<i<<" "<<j<<'\n';
                lights[i][j]=1-lights[i][j];
                if(valid(i-1, j, 3, 3)) lights[i-1][j]=1-lights[i-1][j];
                if(valid(i+1, j, 3, 3)) lights[i+1][j]=1-lights[i+1][j];
                if(valid(i, j-1, 3, 3)) lights[i][j-1]=1-lights[i][j-1];
                if(valid(i, j+1, 3, 3)) lights[i][j+1]=1-lights[i][j+1];
                // Xor ^1: lights[i][j]^=1;
                /*
                 * 0 -> 1
                 * 1 -> 0
                 * 1-curState = newState
                 */
            }
    for(int i=0;i<3;i++) {
        for (int j = 0; j < 3; j++) cout<<lights[i][j];
        cout<<'\n';
     }

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
