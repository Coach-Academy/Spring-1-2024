#include <bits/stdc++.h>
using namespace std;
#define el '\n'
void fast ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

}
int main()
{
    fast();
    int n, m;
    cin >> n >> m;
    map<int, int > mps, mpb;
    while (n--)
    {
        char c ;
        int p, num ;
        cin >> c >> p >> num;
        if (c=='S')
            mps[p]+=num;
        else mpb[p]+=num;
    }
    vector<pair<int,int>> b, s;
    for (auto i : mpb)
    {
        b.push_back({i.first, i.second});
    }
    for (auto i : mps)
    {
        s.push_back({i.first, i.second});
    }
    sort(b.begin(),b.end());
    sort(s.begin(),s.end());
    reverse(b.begin(),b.end());
    for (int i=min(m-1 , (int)s.size()-1);i>=0 ;i--){
        cout << "S " << s[i].first << " " << s[i].second << el;
    }
    for (int i=0;i<b.size() && i<m;i++){
        cout << "B " << b[i].first << " " << b[i].second <<el;
    }


    return 0;
}
