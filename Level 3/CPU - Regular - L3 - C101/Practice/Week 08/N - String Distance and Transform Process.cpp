#include <bits/stdc++.h>

using namespace std;
#define int long long
const int N = 100;
string s, t;
int mem[N][N];
int vis[N][N], tc;

int dp(int i, int j) {
  if (i == s.size() or j == t.size()) {
    int r1 = s.size() - i;
    int r2 = t.size() - j;
    return r1 + r2;
  }
  int &res = mem[i][j];
  if (vis[i][j] == tc)return res;
  vis[i][j] = tc;
  if (s[i] == t[j]) {
    return res = dp(i + 1, j + 1);
  }
  int op1 = 1 + dp(i + 1, j); /// delete
  int op2 = 1 + dp(i, j + 1); /// insert
  int op3 = 1 + dp(i + 1, j + 1); /// Replace
  return res = min({op1, op2, op3});
}

vector<string> out;

void build(int i, int j) {
  if (j == t.size()) {
    int r1 = s.size() - i;
    string op = "Delete " + to_string(i + 1);
    for (int k = 0; k < r1; ++k) {
      out.emplace_back(op);
    }
    return;
  }
  if (i == s.size()) {
    for (int k = t.size() - 1; k >= j; --k) {
      string op = "Insert " + to_string(i + 1) + ",";
      op += t[k];
      out.emplace_back(op);
    }
    return;
  }
  if (s[i] == t[j]) {
    build(i + 1, j + 1);
    return;
  }
  int opt = dp(i, j);
  int op1 = 1 + dp(i + 1, j); /// delete
  int op2 = 1 + dp(i, j + 1); /// insert
  int op3 = 1 + dp(i + 1, j + 1); /// Replace
  string op;
  if (opt == op1) {
    build(i + 1, j);
    op = "Delete " + to_string(i + 1);
  } else if (opt == op2) {
    build(i, j + 1);
    op = "Insert " + to_string(i + 1) + ",";
    op += t[j];
  } else {
    build(i + 1, j + 1); /// Replace 3,d
    op = "Replace " + to_string(i + 1) + ",";
    op += t[j];
  }
  out.emplace_back(op);
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  while (getline(cin, s) && getline(cin, t)) {
    if (tc) cout << '\n';
    ++tc;
    cout << dp(0, 0) << '\n';
    out.clear();
    build(0, 0);
    for (int i = 0; i < out.size(); ++i) {
      cout << i + 1 << " " << out[i] << '\n';
    }
  }
}
