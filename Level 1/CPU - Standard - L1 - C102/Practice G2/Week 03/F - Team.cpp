#include <bits/stdc++.h>

using namespace std;

int main() {
    int problems = 0;
    int n;
    cin >> n;

    while (n--) {
        bool per1, per2, per3;
        cin >> per1 >> per2 >> per3;
        if (per1 + per2 + per3 >= 2)
            problems++;
    }
    cout << problems << endl;
}
