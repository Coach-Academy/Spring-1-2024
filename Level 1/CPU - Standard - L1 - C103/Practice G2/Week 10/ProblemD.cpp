#include <bits/stdc++.h>
using namespace std;
void fast()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int trucks (int numCrates , int loadSize){
     // base case
     if (numCrates <= loadSize)
        return 1;
     // transition
     if (numCrates %2 ==0){
        return trucks(numCrates/2 , loadSize) * 2;
     }
     else {
        return trucks(numCrates/2,loadSize) + trucks(numCrates/2+1 , loadSize);
     }


}
int main()
{
    fast();
    int numCrates , loadSize;
    while(cin >> numCrates >> loadSize){
    cout << trucks(numCrates , loadSize) << "\n";
    }
    return 0;
}
