#include <bits/stdc++.h>

using namespace std;
const int N = 101;
int n, m;
char g[N][N];

bool vald(int x, int y) { return x >= 0 && x < n && y >= 0 && y < m && g[x][y] != 'W'; }
const pair<int, int> adj[] = {
    {-1, 0},
    {0,  +1},
    {+1, 0},
    {0,  -1}
};

int dis[N][N][2];

int bfs(int sx, int sy) {
  queue<array<int, 3>> q;
  memset(dis, '?', sizeof dis);
  dis[sx][sy][0] = 1;
  q.push({sx, sy, 0});
  while (q.size()) {
    auto [x, y, state] = q.front();
    q.pop();
    int d = dis[x][y][state];
    if (x == 0 or x + 1 == n or y == 0 or y + 1 == m) {
      return d;
    }
    for (auto [dx, dy]: adj) {
      int i = dx + x, j = dy + y, s = state;
      if (!vald(i, j))continue;
      if (g[i][j] == 'C') s = 0;
      else if (g[i][j] == 'O')s = 1;
      else if (g[i][j] == 'D' and !s)continue;
      if (dis[i][j][s] <= d + 1)continue;
      dis[i][j][s] = d + 1;
      q.push({i, j, s});
    }
  }
  return -1;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  while (cin >> n >> m, n > 0 && m > 0) {
    int x, y;
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        cin >> g[i][j];
        if (g[i][j] == 'H') {
          x = i, y = j;
        }
      }
    }
    cout << bfs(x, y) << '\n';
  }
}
