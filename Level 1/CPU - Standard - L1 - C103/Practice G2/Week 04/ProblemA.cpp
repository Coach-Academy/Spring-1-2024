#include <iostream>
using namespace std ;
int main () {
    int n;
    cin >> n;
    int arr[n+1][n+1];
    for (int i=0 ; i< n ; i++){
        arr[0][i] = 1;
        arr[i][0] = 1;
    }
    int mx = 1 ;
    for ( int row = 1 ; row < n ; row++){
        for (int col = 1 ; col < n ; col++){
            arr[row][col] = arr[row-1][col] + arr[row][col-1];
            mx = max (mx , arr[row][col]);
        }
    }
   cout << mx ;
}