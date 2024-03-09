#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int people = 0, mx = 0;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        people -= a;
        people += b;
        if (people > mx)
            mx = people;
    }
    cout << mx << endl;


}
