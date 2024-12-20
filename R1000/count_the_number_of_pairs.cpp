//fuchsia's last today
#include <bits/stdc++.h>
using namespace std;

constexpr double PI = 3.141592653589793;
constexpr int MOD = 1000000007;

#define ll long long
#define ld long double
#define ull unsigned long long
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define umii unordered_map<int, int>
#define umll unordered_map<ll, ll>
#define unsi unordered_map<string, int>

#define $ "\n"
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define FOR(i, a, b) for (ll i = (ll)a; i < (ll)b; i++)
#define RFOR(i, a, b) for (ll i = (ll)a; i >= (ll)b; i--)
#define all(v) (v).begin(), (v).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<int> l(26, 0), c(26, 0);
    FOR(i, 0, n)
    {
        if (islower(s[i])) l[s[i] - 'a']++;
        else c[s[i] - 'A']++;
    }

    int res = 0;
    int diff = 0;
    FOR(i, 0, 26)
    {
        res += min(l[i], c[i]);
        diff += (abs(l[i] - c[i])) / 2;
    }
    
    cout << res + min(k, diff) << $;
}

int main()
{
    FAST_IO

    int t;
    cin >> t;
    while (t--) { solve(); }

    return 0;
}