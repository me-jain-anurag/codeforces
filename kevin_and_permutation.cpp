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

    int cnt = 1;
    int start = n / k + 1;
    FOR(i, 1, n + 1)
    {
        if (i % k == 0) cout << cnt++ << " ";
        else cout << start++ << " ";
    }
    cout << $;
}

int main()
{
    FAST_IO

    int t;
    cin >> t;
    while (t--) { solve(); }

    return 0;
}