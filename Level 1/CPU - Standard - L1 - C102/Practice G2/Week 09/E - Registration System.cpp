#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> freq;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        if (!freq[s]) {
            cout << "OK\n";
        } else {
            cout << s << freq[s] << endl;
        }
        freq[s]++;
    }
}
