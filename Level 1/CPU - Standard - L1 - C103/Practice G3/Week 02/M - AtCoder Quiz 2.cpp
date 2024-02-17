#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;
    cin >> x;
    if (x < 40) { // novice
        cout << 40 - x << endl;
    } else if (x < 70) { // intermediate
        cout << 70 - x << endl;
    } else if (x < 90) { // advanced
        cout << 90 - x << endl;
    } else { // expert
        cout << "expert\n";
    }
}
