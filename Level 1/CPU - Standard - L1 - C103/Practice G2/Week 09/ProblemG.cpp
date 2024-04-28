#include <bits/stdc++.h>
using namespace std;
void fast ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

}
int main()
{
    fast();
    int n , m;
    cin >>n >> m;
    set<int>st;
    for (int i=0;i<n;i++){
        int x;
        cin >> x;
        while (x--){
            int y;
            cin >> y;
            st.insert(y);
        }
    }
    if (st.size()==m)
        cout << "YES";
    else cout << "NO";

    return 0;
}
