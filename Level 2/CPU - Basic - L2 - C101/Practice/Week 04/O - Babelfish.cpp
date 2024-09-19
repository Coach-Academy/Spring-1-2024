#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<string> get_words(string str)
{
    vector<string> ret;
    string word;
    stringstream ss(str);
    while (ss >> word) {
        ret.push_back(word);
    }
    return ret;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    map<string,string>m;
    string s;while(getline(cin,s))
    {
        vector<string>w=get_words(s);
        if(w.empty()) continue;
        if(w.size()==2)
        {
            m[w[1]]=w[0];
        }
        else
        {
            if(m.find(w[0])!=m.end())
            {
                cout<<m[w[0]]<<'\n';
            }
            else
            {
                cout<<"eh\n";
            }
        }
    }
    return 0;
}
