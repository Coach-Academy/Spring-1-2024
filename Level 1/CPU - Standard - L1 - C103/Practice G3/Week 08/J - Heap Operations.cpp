#include <bits/stdc++.h>

using namespace std;

void insert_query(int s, vector<string> &ans, priority_queue<int, vector<int>, greater<>> &pq) {
    ans.push_back("insert " + to_string(s));
    pq.push(s);
}

void remove_query(vector<string> &ans, priority_queue<int, vector<int>, greater<>> &pq) {
    ans.push_back("removeMin");
    pq.pop();
}

void getMin_query(int s, vector<string> &ans) {
    ans.push_back("getMin " + to_string(s));
}


int main() {
    int q;
    cin >> q;
    priority_queue<int, vector<int>, greater<>> pq;
    vector<string> ans;
    while (q--) {
        string query;
        cin >> query;
        if (query == "insert") {
            int n;
            cin >> n;
            insert_query(n, ans, pq);
        } else if (query == "getMin") {
            int s;
            cin >> s;
            if (pq.size() and s > pq.top()) {
                while (pq.size() and pq.top() < s)
                    remove_query(ans, pq);
            }
            if ((pq.size() and s < pq.top()) or pq.empty()) {
                insert_query(s, ans, pq);
            }
            getMin_query(s, ans);
        } else if (query == "removeMin") {
            if (pq.empty())
                insert_query(0, ans, pq);
            remove_query(ans, pq);
        }
    }
    cout << ans.size() << endl;
    for (auto &ans: ans) {
        cout << ans << endl;
    }
}
