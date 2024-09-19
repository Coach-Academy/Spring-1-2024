#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll fibonacci(int n) {
  if (n <= 1) { 
    return n; 
  }
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  cout << fibonacci(n);
}

