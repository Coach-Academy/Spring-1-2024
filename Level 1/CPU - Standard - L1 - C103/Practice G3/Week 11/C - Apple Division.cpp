#include <bits/stdc++.h>

using namespace std;
long long sum1 = 0;

long long solve(int i, long long sum2, vector<int> &v) {
    if (i == v.size()) {
        return abs((sum1 - sum2) - sum2);
    }
    return min(solve(i + 1, sum2 + v[i], v), solve(i + 1, sum2, v));
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        sum1 += v[i];
    }
    cout << solve(0, 0, v) << endl;
}
