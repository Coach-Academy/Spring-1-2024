#include <bits/stdc++.h>

using namespace std;

int main() {
    char dir;
    cin >> dir;
    map<char, char> mp;
    vector<string> layout = {
            "qwertyuiop",
            "asdfghjkl;",
            "zxcvbnm,./",
    };
    if (dir == 'L') {
        for (int i = 0; i < layout.size(); ++i) {
            string line = layout[i];
            for (int j = 0; j < line.size() - 1; ++j) {
                mp[line[j]] = line[j + 1];
            }
        }
    } else {
        for (int i = 0; i < layout.size(); ++i) {
            string line = layout[i];
            for (int j = 1; j < line.size(); ++j) {
                mp[line[j]] = line[j - 1];
            }
        }
    }
    string s;
    cin >> s;
    for (auto &ch: s) {
        cout << mp[ch];
    }
}
