#include <bits/stdc++.h>
using namespace std ;
int main () {
    int v , s, t, d;
    cin >> v >> t >> s >> d;
    int d1 = v * t ;
    int d2 = v * s;
    if (d >= d1 && d<=d2)
        cout << "No";
    else cout << "Yes";

}

