#include <bits/stdc++.h>

using namespace std;

int solve(int s, int day) {
    if (s <= 0)
        return day - 1;

    s -= day;
    return solve(s, day + 1);
}

int main() {
    int n;
    cin >> n;
    cout << solve(n, 1);
}
