#include <bits/stdc++.h>

using namespace std;

int main() {
    int alice = 0, bob = 0;
    vector<pair<int, int>> scores(3);
    for (auto &v: scores)
        cin >> v.first;
    for (auto &v: scores)
        cin >> v.second;

    for (int i = 0; i < 3; ++i) {
        alice += scores[i].first > scores[i].second;
        bob += scores[i].first < scores[i].second;
    }
    cout << alice << ' ' << bob << endl;
}
