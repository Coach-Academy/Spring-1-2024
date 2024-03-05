#include <bits/stdc++.h>
using namespace std ;
int main () {
  int t;
  cin >> t;
  while (t--){
      string s;
      cin >> s;
      sort (s.begin() , s.end());
      bool ok = true ;
      for (int i=0 ; i < s.size()-1 ; i++){
          if (s[i+1] != s[i] + 1){
              ok = false;
              break;
          }
      }
      if (ok)
          cout << "Yes\n";
      else cout << "No\n";
  }
}