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
    string s;
    cin >> n >> s;
    vector<int>v(n);
    for (auto & i : v)
        cin >> i;
     int mn = INT_MAX;
    for (int i=0;i<n-1;i++){
        if (s[i]=='R' && s[i+1]=='L'){
            mn = min (mn , (v[i+1]-v[i])/2);
        }
    }
    if (mn == INT_MAX)
        mn = -1;
    cout << mn;

}
