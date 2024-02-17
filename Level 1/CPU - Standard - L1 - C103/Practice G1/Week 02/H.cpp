#include <iostream>

using namespace std;

int main() {
    int k ,x;
    cin >> k >> x;
    k *= 500;
    if ( k >= x)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}