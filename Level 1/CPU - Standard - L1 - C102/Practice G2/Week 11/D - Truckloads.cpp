#include <bits/stdc++.h>

using namespace std;

int f(int pile, int truck) {
    if (pile <= truck) {
        return 1;
    }

    int ans = f(pile / 2, truck) + f(ceil(pile / 2.0), truck);
    return ans;
}

int main() {
    int pile, truckSize;
    while (cin >> pile >> truckSize) {
        cout << f(pile, truckSize) << endl;
    }
}
