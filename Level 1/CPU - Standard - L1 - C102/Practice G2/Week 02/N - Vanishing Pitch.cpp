#include <bits/stdc++.h>

using namespace std;

int main() {
    int v, t, s, d;
    cin >> v >> t >> s >> d;
    int dis1 = v * t, dis2 = v * s;
    if (d < dis1 or d > dis2)// before or after being invisible
        cout << "Yes\n";
    else if (d >= dis1 and d <= dis2)
        cout << "No\n";

}
