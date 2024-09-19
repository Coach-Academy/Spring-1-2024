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
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        deque<int>d(n);
        for (int i=0;i<n;i++)
            cin >> d[i];
        vector<int>ans(n+1 , 0);
        for (int i=n;i>=1;i--){
            while (d.back()!=i){
                ans[i]++;
                d.push_back(d.front());
                d.pop_front();
            }
            d.pop_back();
        }
        for (int i=1;i<=n;i++)
            cout << ans[i] << ' ';
        cout << el;
    }
}
