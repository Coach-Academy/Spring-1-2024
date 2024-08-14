#include <bits/stdc++.h>

using namespace std;

int main() {
    char day1, day2, day3;
    cin >> day1 >> day2 >> day3;
    if (day1 == day2 and day2 == day3 and day1 == 'R')
        cout << 3 << endl;
    else if ((day1 == day2 and day1 == 'R') or (day2 == day3 and day2 == 'R'))
        cout << 2 << endl;
    else if (day1 == day2 and day2 == day3 and day1 == 'S')
        cout << 0 << endl;
    else
        cout << 1 << endl;
}
