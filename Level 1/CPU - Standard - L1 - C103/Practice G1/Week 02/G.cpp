#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    if ( b >= a)
        cout << a;
    else
        cout << a-1;
    return 0;
}