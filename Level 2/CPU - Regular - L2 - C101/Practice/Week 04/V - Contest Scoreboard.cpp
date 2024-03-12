
#include<bits/stdc++.h>

using namespace std;

struct Team {
  int id, score{}, AC{};
  bool solved[10]{};
  int penalty[10]{};
  bool submitted = false;

  void submit(int problem, int time, char state) {
    submitted = true;
    if (solved[problem])return;
    if (state == 'I') {
      penalty[problem] += 20;
    } else if (state == 'C') {
      AC++;
      solved[problem] = true;
      penalty[problem] += time;
      score += penalty[problem];
    }
  }

  bool operator<(const Team &other) const {
    if (AC != other.AC) {
      return AC > other.AC;
    }
    if (score != other.score) {
      return score < other.score;
    }
    return id < other.id;
  }

};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tc;
  cin >> tc;
  cin.ignore();
  string line;
  getline(cin, line);
  while (tc--) {
    vector<Team> teams(100);
    for (int i = 0; i < 100; ++i) {
      teams[i].id = i + 1;
    }
    while (getline(cin, line) and line.size()) {
      stringstream ss(line);
      int contestant, problem, time;
      char state;
      ss >> contestant >> problem >> time >> state;
      teams[contestant - 1].submit(problem, time, state);
    }
    sort(teams.begin(), teams.end());
    bool pr = false;
    for (auto &x: teams) {
      if (x.submitted)
        pr = true, cout << x.id << ' ' << x.AC << ' ' << x.score << '\n';
    }
    if (tc && pr)cout << '\n';
  }
}
