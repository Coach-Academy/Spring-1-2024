#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int mn = arr[0], mx = arr[0];
    int ans = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[i] > mx) {
            ans++;
            mx = arr[i];
        }
        if (arr[i] < mn) {
            ans++;
            mn = arr[i];
        }
    }
    cout << ans << endl;
}
