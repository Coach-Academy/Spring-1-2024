#include <bits/stdc++.h>

using namespace std;

string f(int i, string &s) {
    if (i == s.size()) {
        return "Yes\n";
    }

    if ((i + 1) % 2 == 1 and isupper(s[i])) {
        return "No\n";
    }
    if ((i + 1) % 2 == 0 and islower(s[i])) {
        return "No\n";
    }
    return f(i + 1, s);
}

int main() {
    string s;
    cin >> s;
    cout << f(0, s);
}
