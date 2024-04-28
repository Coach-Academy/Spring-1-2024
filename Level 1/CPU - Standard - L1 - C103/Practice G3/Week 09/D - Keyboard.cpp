#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<string> v = {
            "qwertyuiop"
            "asdfghjkl;"
            "zxcvbnm,./"
    };
    char ch;
    cin >> ch;
    map<char, char> mp;
    if (ch == 'R') {
        for (int i = 0; i < v.size(); ++i) {
            string lineInKeyboard = v[i];
            for (int j = 1; j < v[i].size(); ++j) {
                mp[lineInKeyboard[j]] = lineInKeyboard[j - 1];
            }
        }
    } else {
        for (int i = 0; i < v.size(); ++i) {
            string lineInKeyboard = v[i];
            for (int j = 0; j < v[i].size() - 1; ++j) {
                mp[lineInKeyboard[j]] = lineInKeyboard[j + 1];
            }
        }
    }
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        cout << mp[s[i]];
    }
    cout << endl;
}
