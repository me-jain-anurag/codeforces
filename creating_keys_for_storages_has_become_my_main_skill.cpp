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
    int n, x, i = 0;
    cin >> n >> x;
    int mask = 0;
    int k = 0;
    for (; i < n; i++)
    {
        if ((i | x) == x)
        {
            mask |= i;
            cout << i << " ";
            k++;
        }
    }

    while (k < n - 1)
    {
        cout << 0 << " ";
        k++;
    }

    cout << (mask ^ x) << endl;

}

int main()
{
    FAST_IO
    int t; cin >> t; while (t--) solve();
    return 0;
}