#include <bits/stdc++.h>

using namespace std;

int main() {
    int steps = 0;
    for (int row = 1; row <= 5; ++row) {
        for (int col = 1; col <= 5; ++col) {
            int cell;
            cin >> cell;
            if (cell == 1) {
                if (col > 3)
                    steps += col - 3;
                else if (col < 3)
                    steps += 3 - col;
                if (row > 3)
                    steps += row - 3;
                else if (row < 3)
                    steps += 3 - row;
            }
        }
    }
    cout << steps << endl;
}
