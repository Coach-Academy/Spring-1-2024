#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> prog, math, pe;
    for (int i = 0; i < n; ++i) {
        int student;
        cin >> student;
        if (student == 1)
            prog.push_back(i + 1);
        else if (student == 2)
            math.push_back(i + 1);
        else
            pe.push_back(i + 1);
    }
    cout << min({prog.size(), math.size(), pe.size()}) << endl;
    while (prog.size() > 0 and math.size() > 0 and pe.size() > 0) {
        cout << prog.back() << ' ';
        cout << math.back() << ' ';
        cout << pe.back() << '\n';
        prog.pop_back();
        math.pop_back();
        pe.pop_back();
    }
}
