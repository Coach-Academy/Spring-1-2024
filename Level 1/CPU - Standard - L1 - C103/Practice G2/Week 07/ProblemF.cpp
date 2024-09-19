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
    int n;
    cin >> n ;
    vector<int>ans;
    for (int i=0;i<n;i++){
        int x;
        cin >> x;
        if (x==1)
            ans.push_back(1);
        else
            ans.back()++;
    }
    cout << ans.size() << el;
    for (auto i : ans)
        cout << i << " ";
}
