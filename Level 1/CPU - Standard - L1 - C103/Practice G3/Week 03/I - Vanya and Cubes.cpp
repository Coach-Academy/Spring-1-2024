#include <bits/stdc++.h>

using namespace std;

int main() {
    int cubes;
    cin >> cubes;
    int ans = 1, currLevel = 1;

    while (cubes > 0) {
        int cost = 0;
        for (int i = 1; i <= currLevel; ++i) {
            cost += i;
        }
        if (cubes >= cost)
            ans = currLevel;
        cubes -= cost;
        currLevel++;
    }
    cout << ans << endl;

}
