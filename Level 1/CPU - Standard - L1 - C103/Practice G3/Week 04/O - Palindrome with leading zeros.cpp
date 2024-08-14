#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    while (s.size() > 0 and s.back() == '0')
        s.pop_back();
    string reversedS = s;
    reverse(reversedS.begin(), reversedS.end());

    if (s == reversedS)
        cout << "Yes\n";
    else cout << "No\n";

}
