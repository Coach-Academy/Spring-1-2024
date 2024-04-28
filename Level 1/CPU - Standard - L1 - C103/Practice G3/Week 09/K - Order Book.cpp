#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, s;
    cin >> n >> s;
    map<int, int> sell;
    map<int, int, greater<>> buy;
    for (int i = 0; i < n; ++i) {
        char d;
        int p, q;
        cin >> d >> p >> q;
        if (d == 'B') {
            buy[p] += q;
        } else {
            sell[p] += q;
        }
    }
    vector<pair<int, int>> ansBuy, ansSell;
    int i = 0;
    for (auto it = buy.begin(); i < s and it != buy.end(); it++, i++) {
        ansBuy.push_back({it->first, it->second});
    }
    i = 0;
    for (auto it = sell.begin(); i < s and it != sell.end(); it++, i++) {
        ansSell.push_back({it->first, it->second});
    }
    reverse(ansSell.begin(), ansSell.end());
    for (auto &ans: ansSell) {
        cout << "S " << ans.first << ' ' << ans.second << endl;
    }
    for (auto &ans: ansBuy) {
        cout << "B " << ans.first << ' ' << ans.second << endl;
    }


}
