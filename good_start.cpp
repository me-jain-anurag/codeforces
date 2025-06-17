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
    int w, h, a, b;
    cin >> w >> h >> a >> b;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int res = 0;
    int xdiff = x2 - x1, ydiff = y2 - y1;
    if (xdiff % a == 0) res++;
    if (ydiff % b == 0) res++;
    if (xdiff == 0 || ydiff == 0) res--;
    if (res >= 1) cout << "YES\n";
    else cout << "NO\n";
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