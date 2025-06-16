#include <bits/stdc++.h>
using namespace std;

constexpr double PI = 3.141592653589793;
constexpr int MOD = 1000000007;

#define ll long long
#define ld long double
#define ull unsigned long long
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define umii unordered_map<int, int>
#define umll unordered_map<ll, ll>
#define umsi unordered_map<string, int>

#define pb push_back
#define fi first
#define se second
#define FOR(i, a, b) for (ll i = (ll)a; i < (ll)b; i++)
#define RFOR(i, a, b) for (ll i = (ll)a; i > (ll)b; i--)
#define all(v) (v).begin(), (v).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

void solve()
{
    int n, res = 0;
    cin >> n;
    vector<int> a(2 * n + 10);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x] = i + 1;
    }
    for (int p = 1; p <= 2 * n; p++)
    {
        for (int d = 1; d * d < p; d++)
        {
            if (p % d) continue;
            int x = d;
            int y = p / d;
            if (a[x] == 0 || a[y] == 0) continue;
            int i = a[x], j = a[y];
            if (i + j == p && i != j) res++;
        }
    }
    cout << res << endl;
}

int main()
{

    FAST_IO

    int t;
    cin >> t;

    while (t--) { solve(); }

    return 0;
}