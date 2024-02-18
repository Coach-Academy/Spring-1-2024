#include <bits/stdc++.h>
using namespace std ;
int main () {
  int a , b , c;
  cin >> a >> b >> c;
  if (c == 0){
      if (a > b)
          cout << "Takahashi";
      else cout << "Aoki";
  }
  else {
      if (b > a)
          cout << "Aoki";
      else  cout << "Takahashi";
  }

}

