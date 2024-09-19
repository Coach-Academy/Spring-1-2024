#include <bits/stdc++.h>

using namespace std;

int main() {
    int s, n;
    cin >> s >> n;
    multiset<pair<int, int>> dragons;
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        dragons.insert({x, y});
    }
    bool ans = 1;
    for (auto &dragon: dragons) {
        if (s > dragon.first)
            s += dragon.second;
        else
            ans = false;
    }
    if (ans)
        cout << "YES\n";
    else
        cout << "NO\n";


}
