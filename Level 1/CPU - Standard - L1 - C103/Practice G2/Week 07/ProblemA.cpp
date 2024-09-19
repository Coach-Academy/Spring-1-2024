#include <bits/stdc++.h>
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
    vector<int>pos , neg , zero;
    for (int i=0;i<n;i++){
        int x;
        cin >> x;
        if (x > 0)
          pos.push_back(x);
        else if (x < 0)
            neg.push_back (x);
        else zero.push_back(x);
    }

    if (neg.size() % 2 == 0){
        zero.push_back(neg.back());
        neg.pop_back();
    }

    if (pos.size()==0){
        if (neg.size()){
            pos.push_back(neg.back());
            neg.pop_back();
        }
        if (neg.size()){
            pos.push_back(neg.back());
            neg.pop_back();
        }
    }
    cout << neg.size() << " " ;
    for (auto i : neg)
        cout << i << ' ';
    cout << "\n" << pos.size() << " ";
    for (auto i : pos)
        cout << i << ' ';
    cout << "\n" << zero.size() << " ";
    for (auto i : zero)
        cout << i << " ";

}
