#include <bits/stdc++.h>
using namespace std;
void fast ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

}
int main()
{
    fast();
    string original = "qwertyuiopasdfghjkl;zxcvbnm,./";
    map<char,int>mp;
    char c ;
    string s;
    cin >> c >> s;
    for (int i=0;i<original.size();i++){
        mp[original[i]] = i ;
    }

    for (char i : s){
        int idx = mp[i];
        if (c=='R')
            cout << original[idx-1];
        else
            cout << original[idx+1];
    }

    return 0;
}
