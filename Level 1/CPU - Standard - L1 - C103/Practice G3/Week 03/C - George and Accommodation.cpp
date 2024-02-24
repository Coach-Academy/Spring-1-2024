#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int numOfAvailableRooms = 0;
    for (int i = 0, p, q; i < n; ++i) {
        cin >> p >> q;
        if (q - p >= 2)
            numOfAvailableRooms++;
    }
    cout << numOfAvailableRooms << endl;
}
