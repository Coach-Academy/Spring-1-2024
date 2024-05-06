#include <bits/stdc++.h>
using namespace std;
void fast()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
string s;
void print (int idx){
   if (s[idx]=='.' || idx==s.size())
    return ;

   cout << s[idx];
   print(idx+1);

}
int main()
{
    fast();
   cin >> s;
   print(0);

    return 0;
}
