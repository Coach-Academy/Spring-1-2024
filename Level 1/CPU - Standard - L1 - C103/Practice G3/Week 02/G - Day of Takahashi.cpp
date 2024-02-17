#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a <= b)
        cout << a << endl;
    else if (a > b)
        cout << a - 1 << endl;
}
