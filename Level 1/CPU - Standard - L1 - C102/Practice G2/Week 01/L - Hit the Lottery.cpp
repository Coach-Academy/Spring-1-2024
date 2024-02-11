#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int total = n / 100;
    n %= 100;
    total += (n / 20);
    n %= 20;
    total += (n / 10);
    n %= 10;
    total += (n / 5);
    n %= 5;
    total += n;
    cout << total << endl;
}
