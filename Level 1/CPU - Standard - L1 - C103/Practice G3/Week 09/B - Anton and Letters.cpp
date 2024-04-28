#include <bits/stdc++.h>

using namespace std;

int main() {
    set<char> st;
    string s;
    getline(cin, s);
    for (auto &ch: s) {
        if (isalpha(ch)) {
            st.insert(ch);
        }
    }
    cout << st.size() << endl;
}
