#include <bits/stdc++.h>

using namespace std;

int main() {
    int numOfProblems = 0;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int person1, person2, person3;
        cin >> person1 >> person2 >> person3;
        if (person1 + person2 + person3 >= 2)
            numOfProblems++;
    }
    cout << numOfProblems << endl;
}
