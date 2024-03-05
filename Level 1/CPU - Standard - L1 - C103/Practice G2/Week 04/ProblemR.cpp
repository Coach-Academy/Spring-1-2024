#include <bits/stdc++.h>
using namespace std ;
int main () {
   int n ;
   cin >> n ;
   string s;
   cin >> s;
   int freq[26] = {};
   for (int i=0;i<n ; i++){
       s[i] = tolower((s[i]));
       freq[s[i] - 'a'] ++;
   }
   int cnt = 0;
   for (int i=0 ; i < 26 ; i++){
       if (freq[i]>0)
           cnt++;
   }
   if (cnt == 26)
       cout << "YES\n";
   else cout << "NO\n";
}