#include <bits/stdc++.h>
using namespace std ;
int main () {
  int  n , k;
  cin >> n >> k;
  int ans = 0;
  while (n--){
      string s;
      cin >> s;
      int freq[10] = {};
      for (int i=0;i<s.size();i++){
          freq[s[i]-'0']++;
      }
      bool ok = true;
      for (int i=0;i<= k ;i++){
          if (!freq[i]) {
              ok = false;
          }
      }
      if (ok)
          ans++;
  }
  cout << ans ;
}