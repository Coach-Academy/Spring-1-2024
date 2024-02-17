#include <iostream>

using namespace std;

int main() {
    long long n,m,a;
    cin >> n >> m >> a;
    long long length = n/a + (n%a > 0 ? 1 : 0);
    long long width = m/a + (m%a > 0 ? 1 : 0);
    cout << length * width;
    return 0;
}