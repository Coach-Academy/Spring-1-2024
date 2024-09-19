#include <bits/stdc++.h>

using namespace std;

long long solve(long long sum, int start, int x, int n) {
    if (sum == x) {
        return 1;
    }
    if (sum > x)
        return 0;

    long long ret = 0;
    long long tmp = 0;
    for (int i = start; tmp <= x; ++i) {
        tmp = sum + (long long) pow((long long) i, n);
        ret += solve(tmp, i + 1, x, n);
    }
    return ret;
}

int main() {
    int x, n;
    cin >> x >> n;
    cout << solve(0, 1, x, n) << endl;
}
