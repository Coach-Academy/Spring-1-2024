#include <bits/stdc++.h>

using namespace std;

string f(deque<pair<int, int>> &spells, int s, int d) {
    if (spells.size() == 1) {
        if (spells[0].first < s and spells[0].second > d)
            return "Yes\n";
        else
            return "No\n";
    }

    int x = spells.front().first, y = spells.front().second;
    spells.pop_front();
    if (x < s and y > d) {
        return "Yes\n";
    } else {
        return f(spells, s, d);
    }
}

int main() {
    int n, s, d;
    cin >> n >> s >> d;
    deque<pair<int, int>> spells(n);
    for (int i = 0; i < n; ++i) {
        cin >> spells[i].first >> spells[i].second;
    }
    cout << f(spells, s, d);
}
