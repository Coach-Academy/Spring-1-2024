#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    priority_queue<int, vector<int>, greater<>> pq;
    queue<int> q;
    while (t--) {
        int query;
        cin >> query;
        if (query == 1) {
            int x;
            cin >> x;
            q.push(x);
        } else if (query == 2) {
            if (!pq.empty()) {
                cout << pq.top() << endl;
                pq.pop();
            } else {
                cout << q.front() << endl;
                q.pop();
            }
        } else {
            while (!q.empty()) {
                pq.push(q.front());
                q.pop();
            }
        }
    }
}
