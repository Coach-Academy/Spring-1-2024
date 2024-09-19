#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int q;
    cin >> q;
    queue<int>qu;
    priority_queue<int>pq;
    while (q--)
    {
        int op;
        cin >> op;
        if (op==1)
        {
            int x;
            cin >> x;
            qu.push(x);
        }

        else if (op==2)
        {
            if (pq.empty())
            {
                cout << qu.front() << "\n";
                qu.pop();
            }
            else
            {
                cout << -pq.top() << "\n";
                pq.pop();
            }
        }

        else
        {
            while (qu.size())
            {
                pq.push(-qu.front());
                qu.pop();
            }
        }
    }


    return 0;
}
