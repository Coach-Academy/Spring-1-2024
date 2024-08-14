#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &in: v)
        cin >> in;

    cout << count(v.begin(), v.end(), 1) << endl;
    for (int i = 0; i < v.size(); ++i) {
        if (i == v.size() - 1 or v[i + 1] == 1) {
            cout << v[i] << ' ';
        }
    }
    cout << endl;
}
