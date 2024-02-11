#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int bottom1 = 7 - a, bottom2 = 7 - b, bottom3 = 7 - c;
    cout << bottom1 + bottom2 + bottom3 << endl;
}
