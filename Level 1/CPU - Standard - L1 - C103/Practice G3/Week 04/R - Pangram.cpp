#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        s[i] = tolower(s[i]);
    }
    sort(s.begin(), s.end());
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] == s[i - 1]) {
            s.erase(s.begin() + i);
            i--;
        }
    }
    if (s.size() == 26)
        cout << "YES\n";
    else cout << "NO\n";
}
