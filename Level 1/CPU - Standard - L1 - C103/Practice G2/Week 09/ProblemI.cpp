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
    int t;
    cin >> t;
    while (t--){
        int n , r;
        cin >> n >> r;
        set<int>st;
        for (int i=0 , x;i<n;i++){
            cin >> x;
            st.insert(x);
        }
        vector<int>v(st.begin() , st.end());
        int d = 0 , cnt=0;
        for (int i=v.size()-1 ;i>=0;i--){
            if (v[i] - d > 0)
                cnt++ ,d+=r ;
        }
        cout << cnt << "\n";
    }

    return 0;
}
