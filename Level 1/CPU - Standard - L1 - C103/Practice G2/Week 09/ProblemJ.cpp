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
    int q;
    cin >> q;
    set<pair<int,int>>m , p;
    int id = 1;
    while (q--){
         int op;
         cin >> op;
         if (op==1){
            int x;
            cin >> x;
            p.insert({-x , id}) ;
            m.insert({id++ , x});
         }
         else if (op==2){
            auto it = *m.begin();
            p.erase({-it.second , it.first});
            m.erase(it);
             cout << it.first << " ";
         }
         else {
            auto it = *p.begin();
            m.erase({it.second , -it.first});
            p.erase(it);
            cout << it.second << " ";
         }
    }

    return 0;
}
