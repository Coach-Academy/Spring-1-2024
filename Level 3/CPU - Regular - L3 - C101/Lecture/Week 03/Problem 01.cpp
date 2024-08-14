// B. Getting Zero
#include <bits/stdc++.h>
using namespace std;

const int N = 32768;

int dist[N];

void bfs() {
    for (int i = 0; i < N; ++i)
        dist[i] = 2e9;
    queue<int> q;
    q.push(0);
    dist[0] = 0;
    while (not q.empty()) {
        int v, u = q.front(); q.pop();
        v = (u - 1 + N) % N;
        if (dist[u] + 1 < dist[v]) {
            dist[v] = dist[u] + 1;
            q.push(v);
        }
        if (u % 2 == 0) {
            v = u / 2;
            if (dist[u] + 1 < dist[v]) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
        if ((u + N) % 2 == 0) {
            v = (u + N) / 2;
            if (dist[u] + 1 < dist[v]) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    bfs();
    int n; cin >> n;
    for (int a, i = 0; i < n; ++i) {
        cin >> a;
        cout << dist[a] << ' ';
    }
    return 0;
}