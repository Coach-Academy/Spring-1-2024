#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int groups = 1;
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] == arr[i + 1])
            continue;
        else {
            groups++;
        }

    }
    cout << groups;
}
