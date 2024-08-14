#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector <int> a(n);
    vector <int> vec(19);
    vec.push_back(10);
    vec.pop_back();
    vec.resize(10);
    vec.assign(10, -1);
    cout << vec.size() << '\n';
    cout << vec.empty() << '\n';
//    vec.clear();
    int f = vec.front();
    int b = vec.back();

    auto it = vec.begin(); it+=4
    auto it2 = vec.end();

//    for (int i = 0; i < vec.size(); i++) {
//        cout << vec[i] << ' ';
//    }


//    for ( ; it != vec.end(); it++) {
//        cout << *it << ' ';
//    }

//    for (auto &i : vec) { // for (int it = 0; it < vec.size(); it++) int &i = vec[it];
//        cout << i << ' ';
//    }

    sort(vec.begin(), vec.end());

    return 0;
}
