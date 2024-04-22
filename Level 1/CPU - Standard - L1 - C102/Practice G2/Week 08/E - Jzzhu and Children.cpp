#include <bits/stdc++.h>

using namespace std;

int main() {
    queue<pair<int, int>> q;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        int s;
        cin >> s;
        q.push({s, i + 1});
    }

    while (q.size() > 1) {
        int candies = q.front().first;
        if (candies - m > 0) {
            q.push({candies - m, q.front().second});
        }
        q.pop();
    }
    cout << q.front().second << endl;
}
