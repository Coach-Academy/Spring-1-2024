#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        s[i] = tolower(s[i]);
    }
    bool isPangram = true;
    for (char i = 'a'; i <= 'z'; ++i) {
        if (s.find(i) == -1)
            isPangram = false;
    }
    if (isPangram)
        cout << "YES\n";
    else cout << "NO\n";
}
