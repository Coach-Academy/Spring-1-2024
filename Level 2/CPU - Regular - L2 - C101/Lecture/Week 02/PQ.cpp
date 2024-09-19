#include <bits/stdc++.h>

using namespace std;

int main() {

    priority_queue <int> q;
    q.push(-10);
    q.push(-11);
    q.push(-9);

    cout << -q.top() << '\n';
    q.pop();

    priority_queue <int, vector <int>, greater<>> pq;
    pq.push(10);
    pq.push(11);
    pq.push(9);

    cout << pq.top() << '\n';
    while(!pq.empty()) {
        cout << pq.top() << ' ';
        pq.pop();
    }

    return 0;
}
