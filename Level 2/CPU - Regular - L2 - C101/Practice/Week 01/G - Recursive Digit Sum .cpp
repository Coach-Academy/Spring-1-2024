#include <bits/stdc++.h>

using namespace std;
#define ll long long

int sumOfDigits(ll n) {
  if (n < 10) {
    return n;
  }
  int d = n % 10;
  n /= 10;
  return d + sumOfDigits(n);
}

int superDigit(ll n) {
  if (n < 10) {
    return n;
  }
  return superDigit(sumOfDigits(n));
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  string n;
  int k;
  cin >> n >> k;
  ll sum = 0;
  for (char ch: n) {
    sum += ch - '0';
  }
  sum *= k;
  cout << superDigit(sum);
}

