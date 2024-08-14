#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int people = 0, mx = -1;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        people -= a, people += b;
        mx = max(mx, people);
    }
    cout << mx << endl;
}
