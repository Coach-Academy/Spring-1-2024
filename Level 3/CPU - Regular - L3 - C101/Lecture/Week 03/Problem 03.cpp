// Pick up sticks
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 6;

int n, in_deg[N];
vector<int> g[N];

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    while (true) {
        int m; cin >> n >> m;
        if (n == 0 and m == 0)
            break;
        for (int u, v; m--; ) {
            // u -> v; v is dependent on u
            cin >> u >> v;
            g[u].push_back(v);
            ++in_deg[v];
        }
        queue<int> q;
        for (int i = 1; i <= n; ++i)
            if (in_deg[i] == 0)
                q.push(i);
        vector<int> ans;
        while (not q.empty()) {
            int u = q.front(); q.pop();
            ans.push_back(u);
            for (int v : g[u]) {
                --in_deg[v];
                if (in_deg[v] == 0)
                    q.push(v);
            }
        }
        for (int i = 0; i <= n; ++i) {
            in_deg[i] = 0;
            g[i].clear();
        }
        if (ans.size() != n) {
            cout << "IMPOSSIBLE\n";
        } else {
            for (int x : ans)
                cout << x << '\n';
        }
    }
    return 0;
}