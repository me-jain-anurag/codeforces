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
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    FOR(i, 0, n) cin >> a[i];
    sort(all(a), greater<int>());
    
    int cnt = 0, left = 0;
    while (left < n)
    {
        int sum = 0, right = left;
        while (sum < x && right < n)
        {
            int least = a[right];
            sum = (right++ - left + 1) * least;
        }
        if (sum >= x) cnt++;
        left = right;
    }
    cout << cnt << endl;
}

int main()
{
    FAST_IO
    int t; cin >> t; while (t--) solve();
    return 0;
}