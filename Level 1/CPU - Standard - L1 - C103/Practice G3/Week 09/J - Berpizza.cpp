#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    queue<int> monoSys;
    multimap<int, int, greater<>> polySys;
    set<int> served;
    int customer = 1;
    while (t--) {
        int op;
        cin >> op;
        if (op == 1) {
            int m;
            cin >> m;
            monoSys.push(customer);
            polySys.insert({m, customer});
            customer++;
        } else if (op == 2) {
            while (served.count(monoSys.front()) > 0) {
                monoSys.pop();
            }
            cout << monoSys.front() << ' ';
            served.insert(monoSys.front());
        } else {
            while (served.count(polySys.begin()->second) > 0) {
                polySys.erase(polySys.begin());
            }
            cout << polySys.begin()->second << ' ';
            served.insert(polySys.begin()->second);
        }
    }
}
