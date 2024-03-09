#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int mn = *min_element(arr, arr + n);
    if (mn == 1)
        cout << "-1\n";
    else
        cout << 1 << endl;
}
