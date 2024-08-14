#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    stack<string> chats;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        chats.push(s);
    }
    set<string> st;
    while (!chats.empty()) {
        if (st.count(chats.top()) == 0)
            cout << chats.top() << endl;
        st.insert(chats.top());
        chats.pop();
    }
}
