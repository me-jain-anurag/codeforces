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
    string s;
    cin >> s;
    if (n == 1)
    {
        cout << (s[0] == '.') << endl;
        return;
    }
    int res = 0;
    res += (s[0] == '.') + (s[n - 1] == '.');
    for (int i = 1; i < n - 1; i++)
    {
        if (s[i - 1] == '.' && s[i] == '.' && s[i + 1] == '.')
        {
            cout << 2 << endl;
            return;
        }
        if (s[i] == '.') res++;
    }
    cout << res << endl;
    return;
}

int main()
{
    FAST_IO
    int t; cin >> t; while (t--) solve();
    return 0;
}