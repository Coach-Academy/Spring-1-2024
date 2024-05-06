#include <bits/stdc++.h>
using namespace std;
void fast()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
vector<int>v;
int minCost (int idx){
  // base case
   if (idx == v.size())
        return INT_MAX;
  // transition
   return min (v[idx] , minCost(idx+1));
}
int main()
{
    fast();
    int n;
    cin >> n;
    while (n--){
        int a , p , x;
        cin >> a >> p >> x;
        if (a < x)
            v.push_back(p);
    }
    if (v.size()==0)
        cout << -1 ;
    else cout << minCost (0);

    return 0;
}
