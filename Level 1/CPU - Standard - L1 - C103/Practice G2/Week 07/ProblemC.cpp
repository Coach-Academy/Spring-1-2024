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
    int n , d;
    cin >> n >> d;
    deque<int>dq(n);
    for (int i=0;i<n;i++)
       cin >> dq[i];

    for (int i=0;i<d;i++){
        dq.push_back(dq.front());
        dq.pop_front();
    }
    for (int i=0;i<n;i++)
        cout << dq[i] << ' ';
}
