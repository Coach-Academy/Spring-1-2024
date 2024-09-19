// Bitmap
#include <bits/stdc++.h>
using namespace std;

const int N = 200, D[4][2]{
    {-1,  0},
    { 0, -1},
    { 0, +1},
    {+1,  0}
};

int dist[N][N];

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int TC; cin >> TC;
    while (TC--) {
        int n, m;
        queue<pair<int, int>> q; 
        cin >> n >> m;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                char c; cin >> c;
                if (c == '1') {
                    q.emplace(i, j);
                    dist[i][j] = 0;
                } else {
                    dist[i][j] = 1e9;
                }
            }
        }
        while (not q.empty()) {
            auto [i, j] = q.front(); q.pop();
            for (int k = 0; k < 4; ++k) {
                int n_i = i + D[k][0], n_j = j + D[k][1];
                if (n_i < 0 or n <= n_i or n_j < 0 or m <= n_j or dist[n_i][n_j] <= dist[i][j] + 1)
                    continue;
                dist[n_i][n_j] = dist[i][j] + 1;
                q.emplace(n_i, n_j);
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j)
                cout << dist[i][j] << ' ';
            cout << '\n';
        }
    }
    return 0;
}