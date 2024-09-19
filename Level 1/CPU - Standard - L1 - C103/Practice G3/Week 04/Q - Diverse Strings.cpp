#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        bool diverse = true;
        for (int i = 1; i < s.size(); ++i) {
            if (s[i] - s[i - 1] != 1)
                diverse = false;
        }
        if (diverse == true)
            cout << "Yes\n";
        else cout << "No\n";
    }
}
