#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr + m);
    int mnAns = 1000000000;
    for (int i = 0, j = n - 1; i < m and j < m; ++i, j++) {
        mnAns = min(mnAns, arr[j] - arr[i]);
    }
    cout << mnAns << endl;
}
