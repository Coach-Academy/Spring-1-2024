#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        int arr[n];
        bool exceedD = false;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            if (arr[i] > d)
                exceedD = true;
        }
        if (exceedD) {
            sort(arr, arr + n);
            int sum = arr[0] + arr[1];
            if (sum <= d)
                cout << "YES\n";
            else
                cout << "NO\n";
        } else
            cout << "YES\n";
    }
}
