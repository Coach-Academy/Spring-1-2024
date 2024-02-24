#include <bits/stdc++.h>

using namespace std;

int main() {
    int ans = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string statement;
        cin >> statement;

        if (statement == "++X" or statement == "X++")
            ans++;
        else
            ans--;
    }
    cout << ans << endl;


}
