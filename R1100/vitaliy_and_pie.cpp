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
    string s;
    cin >> s;
    int res = 0;
    unordered_map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        if (i & 1)
        {
            if (mp[s[i] + 32] > 0) mp[s[i] + 32]--;
            else res++;
        }
        else mp[s[i]]++;
    }
    cout << res << endl;
}

int main()
{
    fastio;

    int t;
    t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}