#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, a;
    cin >> n >> m >> a;
    long long numOfFlagstonesInWidth = n / a;
    if (n % a > 0)
        numOfFlagstonesInWidth++;

    long long numOfFlagstonesInHeight = m / a;
    if (m % a > 0)
        numOfFlagstonesInHeight++;

    cout << numOfFlagstonesInWidth * numOfFlagstonesInHeight << endl;
}
