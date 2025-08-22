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
    int n;
    cin >> n;
    vector<ll> a(n);
    for (ll& x : a) cin >> x;
    int y = (2 * a[0] - a[1]) / (n + 1);
    int x = a[1] - a[0] + y;

    if (x < 0 or y < 0)
    {
        cout << "NO\n";
        return;
    }

    int flag = 1, r = y * (n + 1);
    for (int i = 0; i < n; i++)
    {
        r += x - y;
        if (r != a[i])
        {
            flag = 0;
            break;
        }
    }
    cout << (flag ? "YES\n" : "NO\n");
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