#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
#define ordered_set tree<pair<int,int>,null_type,less<>,rb_tree_tag,tree_order_statistics_node_update>

#define int long long

using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int &x: arr) {
        cin >> x;
    }
    vector<vector<int>> nxt(n);
    {
        vector<int> cur(30, n);
        for (int i = n - 1; i >= 0; --i) {
            for (int j = 0; j < 30; ++j) {
                if (arr[i] >> j & 1)
                    cur[j] = i;
            }
            nxt[i] = cur;
        }
    }

    vector<vector<pair<int, int>>> diff(n);
    map<int, multiset<int>> mp;
    for (int i = 0; i < n; ++i) {
        int cur = arr[i], j = i;
        diff[i].emplace_back(cur, j);
        while (true) {
            int mn = n;
            for (int k = 0; k < 30; ++k) {
                if (cur >> k & 1)continue;
                mn = min(mn, nxt[j][k]);
            }
            if (mn == n)break;
            cur |= arr[j = mn];
            diff[i].emplace_back(cur, j);
        }
        for (auto [val, id]: diff[i]) {
            mp[val].emplace(id);
        }
    }
    ordered_set all;
    map<int, int> mn;
    for (auto &[val, i]: mp) {
        all.insert({*i.begin(), val});
        mn[val] = *i.begin();
    }
    vector<vector<pair<int, int>>> queries(n);
    for (int i = 0, l, r; i < q; ++i) {
        cin >> l >> r;
        queries[--l].emplace_back(r, i);
    }
    vector<int> res(q);
    for (int i = 0; i < n; ++i) {
        for (auto &[r, iq]: queries[i]) {
            res[iq] = all.order_of_key({r, -1});
        }

        for (auto [val, id]: diff[i]) {
            auto &m = mp[val];
            m.erase(m.find(id));
            if (m.empty()) {
                all.erase({id, val});
            } else if (*m.begin() != mn[val]) {
                all.erase({id, val});
                all.insert({mn[val] = *m.begin(), val});
            }
        }
    }
    for (int &x: res) {
        cout << x << '\n';
    }
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tc = 1;
//    cin >> tc;
    while (tc--) {
        solve();
    }
}
