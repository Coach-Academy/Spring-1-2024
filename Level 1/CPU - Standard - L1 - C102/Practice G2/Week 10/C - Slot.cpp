#include <bits/stdc++.h>

using namespace std;

int main() {
    set<char> st;
    for (int i = 0; i < 3; ++i) {
        char ch;
        cin >> ch;
        st.insert(ch);
    }
    if (st.size() == 1)
        cout << "Won\n";
    else
        cout << "Lost\n";
}
