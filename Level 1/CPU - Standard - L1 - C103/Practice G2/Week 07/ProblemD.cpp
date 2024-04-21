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
    int n;
    cin >> n;
    vector<int>first , second , third;
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        if (x==1)
            first.push_back(i);
        else if (x==2)
            second.push_back(i);
        else third.push_back(i);
    }
    int mn = min ({first.size() , second.size() , third.size()});
    cout << mn << "\n";
    for (int i=0;i<mn;i++){
        cout << first[i] << ' ' << second[i] << ' ' << third[i] << el;
    }

}
