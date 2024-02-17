#include <bits/stdc++.h>

using namespace std;

int main() {
    int v, t, s, d;
    cin >> v >> t >> s >> d;
    int beginDis = v * t, endDis = v * s;
    if (beginDis > d or endDis < d) {
        cout << "Yes\n";
    } else if (d >= beginDis and d <= endDis)
        cout << "No\n";
}
