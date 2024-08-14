#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int pos = 0, neg = 0;
    for (int i = 0; i < n; ++i) {
        int s;
        cin >> s;
        if (s > 0)
            pos += s;
        else
            neg += s;
    }
    cout << pos - neg << endl;
}
