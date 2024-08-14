#include <bits/stdc++.h>

using namespace std;

int sum(string &s) {
    if (s.size() == 1)
        return s.back() - '0';

    int dig = s.back() - '0';
    s.pop_back();
    int ans = sum(s);
    return dig + ans;
}


int main() {
    string n;
    int k;
    cin >> n >> k;
    n = to_string(sum(n));
    string p;
    while (k--) {
        p += n;
    }
    while (p.size() > 1) {
        p = to_string(sum(p));
    }
    cout << p;
}
