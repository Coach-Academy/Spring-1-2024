#include <bits/stdc++.h>
using namespace std;
int main() {
    double l , p , q;
    cin >> l >> p >> q;
    double time = l / (p + q);
    double distance_from_Harry = p * time ;
    cout << distance_from_Harry;
    return 0;
}
