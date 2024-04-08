#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    deque<int> dq(n), pos(n);
    for (int i = 0; i < n; ++i) {
        cin >> dq[i];
        pos[i] = i + 1;
    }
    while (dq.size() > 1) {
        if (dq.front() - m > 0) {
            dq.push_back(dq.front() - m);
            pos.push_back(pos.front());
        }
        dq.pop_front();
        pos.pop_front();
    }
    cout << pos.back() << endl;
}
