#include <bits/stdc++.h>

using namespace std;

set<string> st;

void solve(string s) {
    st.insert(s);
    if (!next_permutation(s.begin(), s.end()))
        return;
    solve(s);
}

int main() {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    solve(s);
    cout << st.size() << endl;
    for (auto &ss: st)
        cout << ss << endl;

}
