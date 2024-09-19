#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    if (s.find('0') != string::npos)
        s.erase(s.begin() + s.find('0'));
    else
        s.pop_back();
    cout << s << endl;
}
