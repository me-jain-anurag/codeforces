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
#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    ll l, r, g;
    cin >> l >> r >> g;
    if (l % g != 0)
        l += (g - l % g);
    if (r % g != 0)
        r -= (r % g);

    ll k = r - l, x = k;
    while (k >= 0ll)
    {
        ll y = 0ll;
        while (x >= k + y * g)
        {
            ll L = l + y * g, R = L + k;
            if (gcd(L, R) == g)
            {
                cout << L << " " << R << endl;
                return;
            }
            y += 1ll;
        }
        k -= g;
    }

    cout << -1 << " " << -1 << endl;
}

int main()
{
    FAST_IO
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}