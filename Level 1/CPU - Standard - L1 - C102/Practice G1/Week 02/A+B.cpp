#include <bits/stdc++.h>

using namespace std;

#define fixed(n) fixed << setprecision(n)
#define ceil(n, m) (((n) + (m) - 1) / (m))
#define add_mod(a, b, m) (((a % m) + (b % m)) % m)
#define sub_mod(a, b, m) (((a % m) - (b % m) + m) % m)
#define mul_mod(a, b, m) (((a % m) * (b % m)) % m)
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define sz(x) int(x.size())
#define debug(x) cout << #x << ": " << (x) << "\n";
#define fi first
#define se second
#define ll long long
#define ull unsigned long long
#define EPS 1e-9
constexpr int INF = 1 << 30, Mod = 1e9 + 7;
constexpr ll LINF = 1LL << 62;
#define PI acos(-1)
template < typename T = int > using Pair = pair < T, T >;
vector < string > RET = {"NO", "YES"};

template < typename T = int > istream& operator >> (istream &in, vector < T > &v) {
    for (auto &x : v) in >> x;
    return in;
}

template < typename T = int > ostream& operator << (ostream &out, const vector < T > &v) { 
    for (const T &x : v) out << x << ' '; 
    return out;
}

void Solve(){
    int n;
    cin >> n;
    vector < int > a(n + 5), dp(n + 5, INF);
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    queue < int > q;
    bool all_visited = false;
    int times = 0;
    while(!all_visited){
        all_visited = true;
        for(int i = 1; i <= n; i++)
            if(dp[i] == INF){
                all_visited = false;
                q.push(i);
                dp[i] = times;
            }
        times++;
        while(!q.empty()){
            int u = q.front();
            q.pop();
            if(u < 1 || u > n)
                continue;
            for(int v = u; v <= min(n, u + a[u] - 1); v++)
                if(dp[v] > dp[u] + 1)
                    dp[v] = dp[u] + 1, q.push(v + 1);
            for(int v = u; v >= max(1, u - a[u] + 1); v--)
                if(dp[v] > dp[u] + 1)
                    dp[v] = dp[u] + 1, q.push(v - 1);
        }
    }
    cout << dp[n] + times << "\n";
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int test_cases = 1;
    cin >> test_cases;
    for(int tc = 1; tc <= test_cases; tc++){
        // cout << "Case #" << tc << ": ";
        Solve();
    }
    return 0;
}
