#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        bool check = true;
        for (int i = 1; i < s.size(); ++i) {
            if (s[i] - s[i - 1] != 1)
                check = false;
        }
        if (check)
            cout << "Yes\n";
        else cout << "No\n";
    }
}
