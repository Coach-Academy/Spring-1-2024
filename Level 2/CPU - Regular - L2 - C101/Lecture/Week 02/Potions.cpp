#include <bits/stdc++.h>

using namespace std;

int main() {
    priority_queue <int, vector <int>, greater<>> pq;
    int n; cin >> n;
    long long h = 0;
    int ans = 0;
    while(n--) {
        int a; cin >> a;
        h+=a, ans++;
        pq.push(a);
        if (h < 0) {
            ans--;
            h-=pq.top();
            pq.pop();
        }
    }
    cout << ans << '\n';
    return 0;
}
