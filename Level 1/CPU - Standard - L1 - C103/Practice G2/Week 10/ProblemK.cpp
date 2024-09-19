#include <bits/stdc++.h>
using namespace std;
void fast()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int n;
int getDay (int i){
   // base case
   if (i*(i+1) / 2 >=n)
      return i;
   // transition
    return getDay(i+1);
}
int main()
{
    fast();
    cin >> n;
    cout << getDay(1);

    return 0;
}
