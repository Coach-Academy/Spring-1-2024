#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll merge(int l, int r, int mid, vector<int> &v) {
    vector<int> left, right;

    for (int i = l; i <= mid; ++i) {
        left.push_back(v[i]);
    }
    for (int i = mid + 1; i <= r; ++i) {
        right.push_back(v[i]);
    }

    int i = 0, j = 0, k = l;
    ll ans = 0;
    while (i < left.size() and j < right.size()) {
        if (left[i] <= right[j]) {
            v[k] = left[i];
            k++;
            i++;
        } else {
            v[k] = right[j];
            k++;
            j++;
            ans += (ll) ((ll) left.size() - i);
        }
    }
    while (i < left.size()) {
        v[k] = left[i];
        i++;
        k++;
    }

    while (j < right.size()) {
        v[k] = right[j];
        j++;
        k++;
    }
    return ans;
}


ll partition(int l, int r, vector<int> &v) {
    ll ans = 0;
    if (l == r) {
        return 0;
    }

    int mid = (l + r) / 2;
    ans += partition(l, mid, v);
    ans += partition(mid + 1, r, v);
    return ans + merge(l, r, mid, v);
}

int main() {
//    vector<int> v = {3, 2, 1, 9};
//    partition(0, 3, v);
//    for (auto &s: v)
//        cout << s << ' ';
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        cout << partition(0, n - 1, v) << endl;

    }
}
//2
//5
//1 1 1 2 2
//5
//2 1 3 1 2

