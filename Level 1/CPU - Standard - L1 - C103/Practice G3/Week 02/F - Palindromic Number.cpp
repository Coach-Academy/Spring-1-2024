#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int lastDigit = n % 10;
    int firstDigit = n / 100;
    if (firstDigit == lastDigit)
        cout << "Yes\n";
    else cout << "No\n";
    
}
