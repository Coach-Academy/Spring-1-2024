#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int add = a + b, sub = a - b, mul = a * b;
    if (add >= sub and add >= mul) {
        cout << add << endl;
    } else if (sub >= add and sub >= mul) {
        cout << sub << endl;
    } else
        cout << mul << endl;
}
