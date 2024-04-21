#include <bits/stdc++.h>
using namespace std;
int mx = 2e9;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n , m;
    cin >> n >> m;
    vector<int>v(n);
    deque<int>d(n);
    for (int i=0;i<n;i++){
         cin >> v[i];
         d[i] = i ;
    }
    int ans = 0 ;
    while (d.size()){
        int idx = d.front();
        d.pop_front();
        v[idx]-=m;
        if (v[idx] > 0)
            d.push_back(idx);
        ans = idx;
    }
    
    cout << ans + 1;

    return 0;
}
