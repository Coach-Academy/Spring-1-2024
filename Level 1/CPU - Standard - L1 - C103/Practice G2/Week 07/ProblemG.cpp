#include <bits/stdc++.h>
#define el '\n'
using namespace std;
void fast ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    fast ();
    int n , m;
    cin >> n >> m;
    vector<int>v(n);
    deque<int>d;
    for (int i=0;i<n;i++){
        cin >> v[i];
        d.push_back(i);
    }
    int ans = 0;
    while (!d.empty()){
        int idx = d.front();
        d.pop_front();
        v[idx]-=m;
        if (v[idx]> 0)
            d.push_back(idx);
        ans = idx;
    }
    cout << ans+1 ;
}
