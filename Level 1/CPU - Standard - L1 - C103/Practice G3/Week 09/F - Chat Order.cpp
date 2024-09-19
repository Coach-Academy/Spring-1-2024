#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> names(n);
    for (int i = 0; i < n; ++i) {
        cin >> names[i];
    }
    reverse(names.begin(), names.end());
    map<string, int> freq;
    for (int i = 0; i < n; ++i) {
        if (freq[names[i]] == 0) {
            cout << names[i] << endl;
        }
        freq[names[i]]++;
    }
}
