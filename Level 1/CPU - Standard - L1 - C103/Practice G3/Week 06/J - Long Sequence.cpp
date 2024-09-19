#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long arr[n], sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }
    long long x;
    cin >> x;
    long long ans = (x / sum) * n;
    long long currentSum = sum * (ans / n);
    for (int i = 0; i < n and currentSum <= x; ++i) {
        currentSum += arr[i];
        ans++;
    }
    cout << ans << endl;

}
