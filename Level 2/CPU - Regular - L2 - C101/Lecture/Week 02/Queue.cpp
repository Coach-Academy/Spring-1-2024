#include <bits/stdc++.h>

using namespace std;

int main() {

    queue <int> q;
    q.push(10);
    q.push(11);
    q.push(9);

    cout << q.front() << '\n';
    q.pop();

    cout << q.back() << '\n';

    return 0;
}
