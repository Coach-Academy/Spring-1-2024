#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    set<char> st;
    for (auto &ch: s)
        if (isalpha(ch))
            st.insert(ch);
    cout << st.size() << endl;
}
