#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    queue<int> q;
    for (int i = 0; i < n; ++i) {
        int s;
        cin >> s;
        q.push(s);
    }

    while (d--) {
        q.push(q.front());
        q.pop();
    }

    while (!q.empty()) {
        cout << q.front() << ' ';
        q.pop();
    }


}
