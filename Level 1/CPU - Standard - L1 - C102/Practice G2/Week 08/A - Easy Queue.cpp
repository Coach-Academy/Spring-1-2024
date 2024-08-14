#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    queue<int> q;
    while (t--) {
        int query;
        cin >> query;
        if (query == 1) {
            int n;
            cin >> n;
            q.push(n);
        } else if (query == 2) {
            if (!q.empty()) {
                q.pop();
            }
        } else {
            if (q.empty())
                cout << "Empty!\n";
            else
                cout << q.front() << '\n';
        }
    }
}
