#include <bits/stdc++.h>
using namespace std;
void fast ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

}
int main()
{
    fast();
    int t;
    cin >> t;
    while (t--){
        string s , ss;
        cin >> s >> ss;
        map<char , bool > mp;
        for (char i : s){
            mp[i] = 1;
        }
        bool ok = 0;
        for (char i : ss){
            if (mp[i]){
                ok = 1;
            }
        }
        if (ok)
            cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
