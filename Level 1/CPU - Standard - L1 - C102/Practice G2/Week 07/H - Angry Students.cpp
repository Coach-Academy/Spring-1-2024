#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        while (s.size() and s.front() == 'P') {
            s.erase(s.begin());
        }
        s.push_back('A');
        int mx = 0, cntP = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'A') {
                mx = max(mx, cntP);
                cntP = 0;
            } else
                cntP++;
        }
        cout << mx << endl;

    }
}
