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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll c1 = 0, c2 = 0;

    for (ll i = 0; i < n; i++)
    {
        if (s[i] =='_') c1++;
        else c2++;
    }

    ll x = c2 / 2;
    if (c2 & 1)
    {
        x *= (x + 1);
    }
    else x *= x;
    ll ans = c1 * x;
    cout << ans << endl;
}

int main()
{
    FAST_IO
    int t; cin >> t; while (t--) solve();
    return 0;
}