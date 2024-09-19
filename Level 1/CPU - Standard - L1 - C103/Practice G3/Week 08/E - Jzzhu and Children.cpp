#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    queue<int> candies, indices;
    for (int i = 0; i < n; ++i) {
        int s;
        cin >> s;
        candies.push(s);
        indices.push(i + 1);
    }

    while (candies.size() > 1) {
        if (candies.front() - m > 0) {
            candies.push(candies.front() - m);
            indices.push(indices.front());
        }
        candies.pop();
        indices.pop();
    }
    cout << indices.front() << endl;

}
