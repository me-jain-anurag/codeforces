#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i, a, b) for(ll i = (ll)a; i < (ll)b; ++i)
#define RFOR(i, a, b) for(ll i = (ll)a; i > (ll)b; --i)
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define pb push_back
#define fi first
#define se second

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

template<typename T, typename U>
auto max(T a, U b) -> decltype(a + b)
{
    return (a > b ? a : b);
}

template<typename T, typename U>
auto min(T a, U b) -> decltype(a + b)
{
    return (a < b ? a : b);
}

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n + 1, 0);
    int maxx = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        maxx = max(maxx, a[i] - a[i - 1]);
    }
    cout << max(maxx, 2 * (x - a[n])) << endl;
}

int main()
{
    fastio;

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}