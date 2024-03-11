#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int best = arr[0], worst = arr[0], amazingDays = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[i] > best) {
            best = arr[i];
            amazingDays++;
        }
        if (arr[i] < worst) {
            worst = arr[i];
            amazingDays++;
        }
    }
    cout << amazingDays << endl;
}
