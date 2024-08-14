#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    while (s.size() > 0 and s.back() == '0') {
        s.pop_back();
    }
    bool isPalindrome = true;
    for (int i = 0; i < s.size() / 2; ++i) {
        if (s[i] != s[s.size() - i - 1]) {
            isPalindrome = false;
        }
    }
    if (isPalindrome)
        cout << "Yes\n";
    else cout << "No\n";
}
