#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    s.pop_back();
    s.erase(s.begin());
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == ' ' or s[i] == ',') {
            s.erase(s.begin() + i);
            i--;
        }
    }
    sort(s.begin(), s.end());
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] == s[i - 1]) {
            s.erase(s.begin() + i);
            i--;
        }
    }
    cout << s.size() << endl;
}
