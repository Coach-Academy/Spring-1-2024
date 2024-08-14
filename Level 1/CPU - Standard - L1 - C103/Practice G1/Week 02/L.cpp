#include <iostream>
using namespace std;

int main()
{
    char f,s,t;
    cin >> f >> s >> t;
    if (f=='R' && s=='R' && t == 'R')
        cout << 3;
    else if ((f=='R' && s=='R') ||(s=='R' && t == 'R'))
        cout << 2;
    else if (f=='R' || s=='R' || t == 'R')
        cout << 1;
    else
        cout << 0;
    return 0;
}