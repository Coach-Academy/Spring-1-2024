#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int mx = arr[0], mxPos = 0;
    for (int i = 0; i < n; ++i) {
        if (mx < arr[i]) {
            mx = arr[i];
            mxPos = i;
        }
    }
    int ans = 0;
    while (mxPos > 0) {
        swap(arr[mxPos], arr[mxPos - 1]);
        ans++;
        mxPos--;
    }
    int mn = arr[n - 1], mnPos = n - 1;
    for (int i = n - 1; i >= 0; --i) {
        if (mn > arr[i]) {
            mn = arr[i];
            mnPos = i;
        }
    }
    while (mnPos < n - 1) {
        swap(arr[mnPos], arr[mnPos + 1]);
        ans++;
        mnPos++;
    }
    cout << ans << endl;

}
