#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    while (n--) {
        stack<char> st;
        cin >> s;
        bool ans = 1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '{' or s[i] == '[' or s[i] == '(')
                st.push(s[i]);
            else {
                if (!st.empty() and st.top() == '{' and s[i] == '}')
                    st.pop();
                else if (!st.empty() and st.top() == '[' and s[i] == ']')
                    st.pop();
                else if (!st.empty() and st.top() == '(' and s[i] == ')')
                    st.pop();
                else
                    ans = false;
            }
        }
        if (st.empty() and ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }


    return 0;
}