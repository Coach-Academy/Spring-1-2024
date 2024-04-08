#include <bits/stdc++.h>

using namespace std;


string isCommandChanged(string comm, bool rev) {
    if (rev) {
        if (comm == "back")
            comm = "front";
        else if (comm == "front")
            comm = "back";
        else if (comm == "push_back")
            comm = "toFront";
        else if (comm == "toFront")
            comm = "push_back";
    }
    return comm;
}

int main() {
    int q;
    cin >> q;
    deque<int> dq;
    bool rev = false;
    while (q--) {
        string comm;
        cin >> comm;
        comm = isCommandChanged(comm, rev);
        if (comm == "back") {
            if (dq.size()) {
                cout << dq.back() << endl;
                dq.pop_back();
            } else
                cout << "No job for Ada?\n";
        } else if (comm == "front") {
            if (dq.size()) {
                cout << dq.front() << endl;
                dq.pop_front();
            } else
                cout << "No job for Ada?\n";
        } else if (comm == "push_back") {
            int n;
            cin >> n;
            dq.push_back(n);
        } else if (comm == "toFront") {
            int n;
            cin >> n;
            dq.push_front(n);
        } else {
            rev = !rev;
        }
    }
}
