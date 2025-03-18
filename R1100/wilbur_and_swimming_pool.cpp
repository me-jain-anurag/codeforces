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
    int n;
    cin >> n;

    vector<pair<int, int>> a(n);

    for (auto& [i, j] : a)
    {
        cin >> i >> j;
    }

    for (int i = 1; i < n; i++)
    {
        int p = abs(a[0].fi - a[i].fi);
        int q = abs(a[0].se - a[i].se);
        if (p > 0 && q > 0)
        {
            cout << p * q;
            return;
        }
    }

    if (n == 2)
    {
        cout << -1;
        return;
    }

    int i = 2;
    int p = abs(a[i].fi - a[i - 1].fi);
    int q = abs(a[i].se - a[i - 1].se);
    if (p > 0 && q > 0)
    {
        cout << p * q;
        return;
    }

    cout << -1;
    return;
}

int main()
{
    FAST_IO
    int t; t = 1; while (t--) solve();
    return 0;
}