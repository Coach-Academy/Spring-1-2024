#include <iostream>
using namespace std ;
int main () {
    int n;
    cin >> n;
    int ans = 0;
    for (int i=1;i<=n;i++){
        int a , b , c;
        cin >> a >> b >> c;
        int sum = a + b + c;
        if (sum>=2)
            ans++;
    }
    cout << ans ;
}