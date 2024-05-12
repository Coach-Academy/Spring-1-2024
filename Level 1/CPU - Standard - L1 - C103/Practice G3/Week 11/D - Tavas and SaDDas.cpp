#include <bits/stdc++.h>

using namespace std;

vector<int> ans;

void solve(long long i) {
    if (i > 1e9)
        return;
    ans.push_back(i);
    solve(i * 10 + 4);
    solve(i * 10 + 7);
}

int main() {
    int n;
    cin >> n;
    solve(0);
    sort(ans.begin(), ans.end());
    cout << find(ans.begin(), ans.end(), n) - ans.begin() << endl;
}
