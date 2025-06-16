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
    ll k;
    cin >> k;
    vector<ll> a(n);
    for (ll &x : a) cin >> x;
    vector<ll> b(64, 0);
	for (int i = 0; i < n; i++)
	{
		int x = a[i], p = 0;
		while (x > 0)
		{
			if (x & 1) b[p]++;
			x >>= 1;
			p++;
		}
	}
	int res = 0;
	for (int i = 0; i < 64; i++)
	{
		if (k > 0)
		{
			ll p = n - b[i];
			ll op = (p << i);
			if (k >= op)
			{
				b[i] += p;
				k -= op;
			}
			else
			{
				b[i] += (k >> i);
				k = 0;
			}
		}
		res += b[i];
	}
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