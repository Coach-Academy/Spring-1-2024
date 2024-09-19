#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int wires[n];
    for (int i = 0; i < n; ++i) {
        cin >> wires[i];
    }
    int m;
    cin >> m;
    while (m--) {
        int x, y;
        cin >> x >> y;
        x--;
        int left = y - 1, right = wires[x] - y;
        wires[x] = 0;
        if (x - 1 >= 0)
            wires[x - 1] += left;
        if (x + 1 < n)
            wires[x + 1] += right;
    }
    for (int i = 0; i < n; ++i) {
        cout << wires[i] << ' ';
    }

}
