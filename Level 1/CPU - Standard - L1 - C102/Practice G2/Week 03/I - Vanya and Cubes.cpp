#include <bits/stdc++.h>

using namespace std;

int main() {
    int cubes, ans;
    cin >> cubes;
    int level = 1;

    while (cubes > 0) {
        int cost = 0;
        for (int i = 1; i <= level; ++i)
            cost += i;
        if (cubes >= cost)
            ans = level;
        cubes -= cost;
        level++;
    }
    cout << ans << endl;
}
