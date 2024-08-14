#include <bits/stdc++.h>

using namespace std;

int main() {
    map<int, int> sell;
    map<int, int, greater<>> buy;
    int n, s;
    cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        char dir;
        cin >> dir;
        int p, q;
        cin >> p >> q;
        if (dir == 'S')
            sell[p] += q;
        else
            buy[p] += q;
    }
    vector<pair<int, int>> ansSell, ansBuy;
    auto sellIt = sell.begin(), buyIt = buy.begin();
    for (int i = 0; i < s; ++i) {
        if (sellIt != sell.end()) {
            ansSell.push_back({sellIt->first, sellIt->second});
            sellIt++;
        }
        if (buyIt != buy.end()) {
            ansBuy.push_back({buyIt->first, buyIt->second});
            buyIt++;
        }
    }
    reverse(ansSell.begin(), ansSell.end());
    for (auto &ans: ansSell)
        cout << "S " << ans.first << ' ' << ans.second << endl;
    for (auto &ans: ansBuy)
        cout << "B " << ans.first << ' ' << ans.second << endl;


}
