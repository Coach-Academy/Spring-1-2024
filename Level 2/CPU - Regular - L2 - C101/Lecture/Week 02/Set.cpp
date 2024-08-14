#include <bits/stdc++.h>

using namespace std;

int main() {
    set <int> st;
    multiset <int> mst;
    st.insert(8);
    st.insert(8);
    st.insert(8);
    st.insert(8);

    mst.insert(8);
    mst.insert(8);
    mst.insert(8);
    mst.insert(8);
    cout << st.size() << ' ' << mst.size() << '\n';

    st.erase(8);
    st.erase(st.begin());

    mst.erase(8); // worst case O(n)
    mst.erase(mst.begin());

    auto it = st.find(8); // if 8 does not exist it will return st.end();
    if (it != st.end()); // 8 is found in the set
    else { // 8 is not found

    }
    mst.erase(mst.find(8));

    for (auto it2 = st.begin(); it2 != st.end(); it2++) {
        cout << *it2 << ' ';
    }
    it = st.begin();
    int cnt = 5;
    while(cnt--) it++;
    for (auto &i : st) {
        cout << i << ' ';
    }
    cout << st.count(8) << '\n';
    mst.count(8); // worst case O(n)
    return 0;
}
