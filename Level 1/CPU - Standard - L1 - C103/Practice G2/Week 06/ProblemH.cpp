#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    while (s.back()=='0')
           s.pop_back();
    string rev = s;
    reverse(rev.begin() , rev.end());
    if (s == rev)
        cout << "Yes";
    else cout << "No";


}
