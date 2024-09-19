#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int one = 0, two = 0, three = 0, taxi = 0;
    for (int i = 0; i < n; ++i) {
        int group;
        cin >> group;
        if (group == 1)
            one++;
        else if (group == 2)
            two++;
        else if (group == 3)
            three++;
        else if (group == 4)
            taxi++;
    }
    taxi += three;
    one -= three;
    taxi += two / 2;
    if (two % 2 == 1) {
        taxi++;
        one -= 2;
    }
    if (one > 0) {
        taxi += one / 4;
        if (one % 4 > 0)
            taxi++;
    }
    cout << taxi << endl;

}
