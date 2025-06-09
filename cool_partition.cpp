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
    vector<int> a(n);
    vector<int> distinct(n, 0), freq(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
        if (freq[a[i]] == 1) distinct[i]++;
        distinct[i] += (i ? distinct[i - 1] : 0);
    }

    int r = n - 1, ans = 0, d = 0;
    fill(all(freq), 0);
    for (int l = n - 1; l >= 0; l--)
    {
        freq[a[l]]++;
        if (freq[a[l]] == 1) d++;
        if (d == distinct[r])
        {
            ans++;
            d = 0;
            for (int i = l; i <= r; i++) freq[a[i]] = 0;
            r = l - 1;
        }
    }
    cout << ans << endl;
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