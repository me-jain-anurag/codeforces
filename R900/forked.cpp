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
    int a, b, xk, yk, xq, yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;
    vector<int> dx = {-1, 1, -1, 1}, dy = {-1, -1, 1, 1};
    set<pair<int, int>> k, q;
    for (int i = 0; i < 4; i++)
    {
        k.insert({xk + dx[i] * a, yk + dy[i] * b});
        k.insert({xk + dx[i] * b, yk + dy[i] * a});
        q.insert({xq + dx[i] * a, yq + dy[i] * b});
        q.insert({xq + dx[i] * b, yq + dy[i] * a});
    }
    int res = 0;
    for (auto& x : k) if (q.contains(x)) res++;

    cout << res << endl;
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