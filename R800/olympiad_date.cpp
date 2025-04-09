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
    int res = n + 1;
    vector<int> freq(10, 0);
    FOR(i, 0, n)
    {
        int x;
        cin >> x;
        freq[x]++;
        if (freq[0] >= 3 && freq[1] >= 1 && freq[2] >= 2 && freq[3] >= 1 && freq[5] >= 1)
        {
            res = min(res, (int)i + 1);
        }
    }
    cout << ((res < n + 1) ? res : 0) << endl;
}

int main()
{
    FAST_IO
    int t; cin >> t; while (t--) solve();
    return 0;
}