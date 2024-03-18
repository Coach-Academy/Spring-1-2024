#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int top ;
    cin >> top;
    int buttom = 7 - top;
    bool ok = true;
    while (n--){
        int a, b;
        cin >> a >> b;
        if (a== top || b==top || a == buttom || b == buttom)
            ok = false;
    }
     if (ok)
        cout << "YES";
     else cout << "NO";


}
