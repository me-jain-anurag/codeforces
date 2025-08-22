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

int pre_sum[501][501];
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<string> mine(n);
    int total_gold = 0;
    for (string& s : mine)
    {
    	cin >> s;
    	for (char& c : s)
    	{
    		total_gold += (c == 'g');
    	}
    }

    for (int i = 1; i <= n; i++)
    {
    	for (int j = 1; j <= m; j++)
    	{
    		pre_sum[i][j] = (mine[i - 1][j - 1] == 'g') + pre_sum[i - 1][j] + pre_sum[i][j - 1] - pre_sum[i - 1][j - 1];
    	}
    }

    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
    	for (int j = 0; j < m; j++)
    	{
    		if (mine[i][j] == '.')
    		{
    			int a = max(i - k + 1, 0), b = min(i + k, n), c = max(j - k + 1, 0), d = min(j + k, m);
    			int cur = pre_sum[b][d] - pre_sum[a][d] - pre_sum[b][c] + pre_sum[a][c];
    			ans = min(ans, cur);
    		}
    	}
    }

    cout << total_gold - ans << endl;
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