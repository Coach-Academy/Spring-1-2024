#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int q;
    cin >> q;
    string s;
    stack<string> history;
    while (q--)
    {
        int c ;
        cin >> c;
        if (c == 1)
        {
            string w;
            cin >> w;
            history.push(s);
            s+=w;
        }
        else if (c == 2)
        {
            int k;
            cin >> k;
            history.push(s);
            s = s.substr(0, s.size() - k);
        }
        else if (c==3){
            int k;
            cin >> k;
            cout << s[k-1] << "\n";
        }

        else {
            s = history.top();
            history.pop();
        }
    }



    return 0;
}
