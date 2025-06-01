#include <bits/stdc++.h>
using namespace std;

constexpr double PI = 3.141592653589793;
constexpr int MOD = 1000000007;

#define ll long long
#define ld long double
#define ull unsigned long long
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define usl unordered_set<ll>
#define umll unordered_map<ll, ll>
#define umsi unordered_map<string, int>

#define fi first
#define se second
#define FOR(i, a, b) for (ll i = (ll)a; i < (ll)b; i++)
#define RFOR(i, a, b) for (ll i = (ll)a; i > (ll)b; i--)
#define all(v) (v).begin(), (v).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

void solve()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int res1 = 0, res2 = 0;
    int x = min(a, n - a + 1);
    int y = min(b, m - b + 1);
    
    res1 += (n != 1);
    if (x > 1) res1 += log2(x - 1) + 1;
    if (m > 1) res1 += log2(m - 1) + 1;
    
    res2 += (m != 1);
    if (y > 1) res2 += log2(y - 1) + 1;
    if (n > 1) res2 += log2(n - 1) + 1;
    
    cout << min(res1, res2) << endl;
}

int main()
{
    FAST_IO
    int t; cin >> t; while (t--) solve();
    return 0;
}