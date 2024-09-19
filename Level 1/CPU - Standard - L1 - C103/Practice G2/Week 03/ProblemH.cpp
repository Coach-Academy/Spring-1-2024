#include <iostream>
using namespace std ;
int main () {
    int ans = 0;
    for (int row = 1 ; row<= 5 ; row++){
          for (int col = 1; col <= 5 ; col++){
              int x;
              cin >> x;
              if (x == 1)
                  ans = abs(row - 3) + abs (col - 3);
          }
    }
    cout << ans ;
}