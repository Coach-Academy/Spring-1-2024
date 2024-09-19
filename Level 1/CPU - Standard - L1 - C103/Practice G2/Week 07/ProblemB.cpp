#include <bits/stdc++.h>
#define el '\n'
using namespace std;
void fast ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    fast ();
    int q;
    cin >> q;
    bool ok = 0;
    deque<int> d;
    while (q--)
    {
        int n;
        string s;
        cin >> s;
        if (s[0]=='t' || s[0] == 'p')
            cin >> n;
        if (s[0]=='b')
        {
            if (!d.empty())
            {
                if (!ok)
                {
                    cout << d.back() << el;
                    d.pop_back();
                }
                else
                {
                    cout << d.front() << el;
                    d.pop_front();
                }
            }
            else
            {
                cout << "No job for Ada?\n";
            }
        }
        if (s[0]=='f')
        {
            if (!d.empty())
            {
                if (!ok)
                {
                    cout << d.front() << el;
                    d.pop_front();
                }
                else
                {
                    cout << d.back() << el;
                    d.pop_back();
                }
            }
            else
            {
                cout << "No job for Ada?\n";
            }
        }
        if (s[0]=='t')
        {
            if (ok)
                d.push_back(n);
            else
                d.push_front(n);
        }
        if (s[0]=='p')
        {
            if (!ok)
                d.push_back(n);
            else d.push_front(n);
        }
        if (s[0]=='r')
            ok = !ok;

    }
}
