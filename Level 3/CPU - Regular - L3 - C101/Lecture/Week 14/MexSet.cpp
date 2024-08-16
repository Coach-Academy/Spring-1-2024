struct MexSet {
  set<int> out;
  map<int, int> in;
  int n;

  MexSet(int sz) {
    n = sz;
    for (int i = 1; i <= n + 1; ++i) {
      out.insert(i);
    }
  }

  void insert(int x) {
    if (x > n + 1)return;
    if (!in[x]) {
      out.erase(x);
    }
    in[x]++;
  }

  void erase(int x) {
    if (x > n + 1)return;
    if (in[x] == 1) {
      out.insert(x);
    }
    in[x]--;
  }

  int query() {
    return *out.begin();
  }
};
