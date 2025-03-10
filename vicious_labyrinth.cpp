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
    int n, k;
    cin >> n >> k;

    if (k & 1)
    {
        FOR(i, 0, n - 1)
        {
            cout << n << " ";
        }
        cout << n - 1;
    }
    else
    {
        FOR(i, 0, n - 2)
        {
            cout << n - 1 << " ";
        }
        cout << n << " " << n - 1;
    }
    cout << endl;
}

int main()
{
    FAST_IO
    int t; cin >> t; while (t--) solve();
    return 0;
}