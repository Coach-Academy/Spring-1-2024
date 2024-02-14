#include <bits/stdc++.h>

using namespace std;

int main() {

    stack <int> stk;
    stk.push(10);
    stk.push(11);
    stk.push(9);

    cout << stk.top() << '\n';
    stk.pop();

    return 0;
}
