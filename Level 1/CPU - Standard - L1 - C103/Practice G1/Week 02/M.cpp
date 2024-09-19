#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    if ( x >= 90)
    {
        cout << "expert";
    }
    else
    {
        if ( x < 40)
            cout << 40-x;
        else if ( x < 70)
            cout << 70-x;
        else
            cout << 90-x;
    }
    return 0;
}