#include <iostream>
using namespace std;

int main()
{
    int v , t ,s,d;
    cin >> v >> t >> s >> d;
    int startdist = t * v;
    int enddist = s * v;
    if (d >= startdist && d<=enddist)
    {
        cout << "No";
    }
    else
        cout << "Yes";
    return 0;
}