#include <bits/stdc++.h>

using namespace std;

int main() {
    queue<int> mono;
    multimap<int, int, greater<>> poly;
    set<int> served;
    int t, customer = 1;
    cin >> t;
    while (t--) {
        int query;
        cin >> query;
        if (query == 1) {
            int m;
            cin >> m;
            mono.push(customer);
            poly.insert({m, customer});
            customer++;
        } else if (query == 2) {
            while (served.count(mono.front()))
                mono.pop();
            cout << mono.front() << ' ';
            served.insert(mono.front());
        } else {
            while (served.count(poly.begin()->second))
                poly.erase(poly.begin());
            cout << poly.begin()->second << ' ';
            served.insert(poly.begin()->second);
        }
    }
}
