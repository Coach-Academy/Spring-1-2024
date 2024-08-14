#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    if (*min_element(arr, arr + n) == 1)
        cout << -1 << endl;
    else
        cout << 1 << endl;

}
