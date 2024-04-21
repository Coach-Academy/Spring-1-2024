#include <bits/stdc++.h>
using namespace std;
int mx = 2e9;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int q;
    cin >> q;
    priority_queue<int, vector<int>, greater<int>> pq;

    vector <pair<string, int>> ans ;
    while (q--)
    {
        string s;
        cin >> s;
        if (s == "insert")
        {
            int x;
            cin >> x;
            pq.push(x);
            ans.push_back(make_pair("insert", x));
        }
        else if (s == "removeMin")
        {
            if (pq.empty())
            {
                ans.push_back(make_pair("insert", 0));
            }
            else
            {
                pq.pop();
            }
            ans.push_back(make_pair("removeMin", mx));
        }
        else
        {
            int x;
            cin >> x;
            while (pq.size() &&  pq.top() <x)
            {
                pq.pop();
                ans.push_back(make_pair("removeMin", mx));
            }
            if (pq.empty() || pq.top() > x)
            {
                pq.push(x);
                ans.push_back(make_pair("insert" , x));
            }
            ans.push_back(make_pair("getMin" , x));
        }
    }

    cout << ans . size() << "\n" ;

    for (auto & i : ans){
        cout << i.first;
        if (i.second != mx)
            cout << " " << i.second;
        cout << "\n";
    }

    return 0;
}
