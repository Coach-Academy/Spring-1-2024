#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    queue<int> q;
    priority_queue<int, vector<int>, greater<>> pq;
    while (t--) {
        int query;
        cin >> query;
        switch (query) {
            case 1:
                int x;
                cin >> x;
                q.push(x);
                break;
            case 2:
                if (pq.empty()) {
                    cout << q.front() << endl;
                    q.pop();
                } else {
                    cout << pq.top() << endl;
                    pq.pop();
                }
                break;
            case 3:
                while (!q.empty()) {
                    pq.push(q.front());
                    q.pop();
                }
                break;
        }
    }
}
