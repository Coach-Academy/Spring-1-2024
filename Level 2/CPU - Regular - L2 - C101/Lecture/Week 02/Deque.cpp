#include <bits/stdc++.h>

using namespace std;

int main() {
    deque <int> dq(19);
    dq.push_back(10);
    dq.pop_back();
    dq.push_front(19);
    dq.pop_front();
    dq.resize(10);
    dq.assign(10, -1);
    cout << dq.size() << '\n';
    cout << dq.empty() << '\n';
    cout << dq[5] << '\n';
//    dq.clear();
    int f = dq.front();
    int b = dq.back();

    auto it = dq.begin();
    auto it2 = dq.end();

//    for (int i = 0; i < dq.size(); i++) {
//        cout << dq[i] << ' ';
//    }


//    for ( ; it != dq.end(); it++) {
//        cout << *it << ' ';
//    }

//    for (auto &i : dq) { // for (int it = 0; it < dq.size(); it++) int &i = dq[it];
//        cout << i << ' ';
//    }

    sort(dq.begin(), dq.end());

    return 0;
}
