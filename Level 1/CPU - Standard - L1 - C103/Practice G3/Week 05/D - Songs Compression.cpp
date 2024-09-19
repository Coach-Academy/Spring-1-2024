#include <bits/stdc++.h>

using namespace std;

int main() {
    int numOfSongs, spaceOfFlashDrive;
    cin >> numOfSongs >> spaceOfFlashDrive;
    int beforeComp[numOfSongs], afterComp[numOfSongs];
    long long spaceOfMusic = 0;
    for (int i = 0; i < numOfSongs; ++i) {
        cin >> beforeComp[i] >> afterComp[i];
        spaceOfMusic += beforeComp[i];
    }
    int gainSpace[numOfSongs];
    for (int i = 0; i < numOfSongs; ++i) {
        gainSpace[i] = beforeComp[i] - afterComp[i];
    }
    sort(gainSpace, gainSpace + numOfSongs, greater<>());
    int ans = 0;
    for (int i = 0; i < numOfSongs and spaceOfMusic > spaceOfFlashDrive; ++i) {
        spaceOfMusic -= gainSpace[i];
        ans++;
    }
    if (spaceOfMusic > spaceOfFlashDrive)
        cout << -1 << endl;
    else
        cout << ans << endl;


}
