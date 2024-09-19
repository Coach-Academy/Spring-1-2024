#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    long long numberOfFlagstonesInWidth = n / a, numberOfFlagstonesInHeight = m / a;

    if (n % a > 0)
        numberOfFlagstonesInWidth++;

    if (m % a > 0)
        numberOfFlagstonesInHeight++;

    cout << numberOfFlagstonesInWidth * numberOfFlagstonesInHeight << endl;
}
