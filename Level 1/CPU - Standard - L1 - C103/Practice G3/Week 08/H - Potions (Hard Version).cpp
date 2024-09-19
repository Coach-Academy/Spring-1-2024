#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<>> pq;
    long long health = 0;
    for (int i = 0; i < n; ++i) {
        int potion;
        cin >> potion;
        health += potion;
        pq.push(potion);
        if (health < 0) {
            health -= pq.top();
            pq.pop();
        }
    }
    cout << pq.size() << endl;
}
