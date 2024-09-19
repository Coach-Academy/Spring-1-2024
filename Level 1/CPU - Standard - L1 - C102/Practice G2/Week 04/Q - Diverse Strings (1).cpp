#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        char mn = s[0];
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] < mn)
                mn = s[i];
        }
        int cnt = 0;
        for (char i = mn; i <= 'z'; ++i) {
            if (s.find(i) != -1)
                cnt++;
            else
                break;
        }
        if (cnt == s.size())
            cout << "Yes\n";
        else cout << "No\n";
    }
}
