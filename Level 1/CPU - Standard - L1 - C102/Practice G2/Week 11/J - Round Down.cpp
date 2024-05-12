#include <bits/stdc++.h>

using namespace std;

void solve(string &s) {
    if (s.empty())
        return;
    if (s[0] == '.')
        return;

    cout << s.front();
    s.erase(s.begin());
    solve(s);
}

int main() {
    string s;
    cin >> s;
    solve(s);
}
