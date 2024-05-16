#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 1e6 + 5;
ll p[N];
set<ll> t_prime;

void sieve() {
  for (ll i = 2; i < N; ++i) { /// n * log(log(n))
    if (!p[i]) {
      t_prime.emplace(i * i);
      for (int j = i + i; j < N; j += i) {
        p[j] = 1;
      }
    }
  }
}

int32_t main() { /// O( n * log(log(n)) + T )
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  const string res[] = {"NO\n", "YES\n"};

  sieve();
  
  int n;
  cin >> n;
  ll x;
  while (n--) {
    cin >> x;
    cout << res[t_prime.count(x)];
  }
}

