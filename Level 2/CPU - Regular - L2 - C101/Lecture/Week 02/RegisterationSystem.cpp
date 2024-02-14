#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    map <string, int> frq;
    while(n--) {
        string s; cin >> s;
        if (frq.count(s)) cout << s << frq[s] << '\n';
        else cout << "OK\n";
        frq[s]++;
    }
    return 0;
}
