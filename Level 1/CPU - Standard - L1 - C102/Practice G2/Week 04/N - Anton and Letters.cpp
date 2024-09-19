#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    s.pop_back();
    s.erase(0, 1);
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == ',' or s[i] == ' ') {
            s.erase(i, 1);
            i--;
        }
    }
    string tmp;
    for (int i = 0; i < s.size(); ++i) {
        if (tmp.find(s[i]) == -1) {
            tmp.push_back(s[i]);
        }
    }
    cout << tmp.size() << endl;
}
