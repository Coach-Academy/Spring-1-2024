#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;
    priority_queue<int, vector<int>, greater<>> pq;
    vector<string> ans;
    while (q--) {
        string query;
        cin >> query;
        if (query == "insert") {
            int x;
            cin >> x;
            pq.push(x);
            ans.push_back("insert " + to_string(x));
        } else if (query == "getMin") {
            int x;
            cin >> x;
            while (!pq.empty() and pq.top() < x) {
                pq.pop();
                ans.push_back("removeMin");
            }
            if (!pq.empty()) {
                if (pq.top() > x) {
                    pq.push(x);
                    ans.push_back("insert " + to_string(x));
                }
                if (pq.top() == x) {
                    ans.push_back("getMin " + to_string(x));
                }
            } else {
                pq.push(x);
                ans.push_back("insert " + to_string(x));
                ans.push_back("getMin " + to_string(x));
            }
        } else {
            if (pq.empty()) {
                pq.push(0);
                ans.push_back("insert " + to_string(0));
            }
            pq.pop();
            ans.push_back("removeMin");
        }
    }
    cout << ans.size() << endl;
    for (auto &s: ans) {
        cout << s << endl;
    }
}
