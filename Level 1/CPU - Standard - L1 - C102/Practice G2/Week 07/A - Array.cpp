#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    deque<int> dq(n);
    for (int i = 0; i < n; ++i) {
        cin >> dq[i];
    }
    sort(dq.begin(), dq.end());
    cout << 1 << ' ';
    cout << dq.front() << endl;
    dq.pop_front();
    if (dq.back() > 0) {
        cout << 1 << ' ';
        cout << dq.back() << endl;
        dq.pop_back();
    } else {
        cout << 2 << ' ';
        cout << dq.front() << ' ';
        dq.pop_front();
        cout << dq.front() << '\n';
        dq.pop_front();
    }
    cout << dq.size() << ' ';
    for (int &out: dq) {
        cout << out << ' ';
    }
}
