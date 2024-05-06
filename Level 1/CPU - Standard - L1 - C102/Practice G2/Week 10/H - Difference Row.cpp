#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < v.size(); ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    swap(v.front(), v.back());
    for (auto &s: v)
        cout << s << ' ';
}
