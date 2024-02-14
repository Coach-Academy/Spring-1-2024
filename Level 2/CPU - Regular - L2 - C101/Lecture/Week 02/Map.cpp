#include <bits/stdc++.h>

using namespace std;

int main() {
    set <pair<int, int>> st;
    map <string, int> mp;
    mp.insert({"mohamed", 4});
    mp["ahmed"] = 3; // {{"ahmed", 3}}
    mp["ahmed"] = 5; // {{"ahmed", 5}}
    cout << mp["ahmed"] << '\n';
    auto it = mp.find("ahmed");
    cout << it->first << ' ' << (*it).second << '\n';
    return 0;
}
