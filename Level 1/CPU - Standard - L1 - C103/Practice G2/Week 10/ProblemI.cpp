#include <bits/stdc++.h>
using namespace std;
void fast()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
string s;
vector<int>v;
int n ,x ;
void print (int idx){
    if (idx == n)
        return ;
    if (v[idx] !=x)
        cout << v[idx] << ' ';
    print(idx+1);
}
int main()
{
    fast();
    cin >> n >> x;
    v.resize(n);
    for (auto & i : v)
        cin >> i;
   print(0);

    return 0;
}
