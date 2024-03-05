#include <bits/stdc++.h>
using namespace std ;
int main () {
  string s;
    getline(cin , s);
  int freq[26] = {};
  for (int i=0;i<s.size();i++){
       if (isalpha(s[i]))
           freq[s[i]-'a']++;
  }
  int ans = 0;
  for (int i=0;i<26;i++)
  {
      if (freq[i])
          ans++;
  }
  cout << ans ;
}