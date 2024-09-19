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
    n--;
    int mn = 1000000000;
    for (int i = n; i < m; ++i) {
        if (arr[i] - arr[i - n] < mn) {
            mn = arr[i] - arr[i - n];
        }
    }
    cout << mn << endl;
}
