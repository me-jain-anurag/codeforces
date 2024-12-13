#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(v) (v).begin(), (v).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

void solve()
{
    ll n, k; cin >> n >> k;
    vll a(n);
    for (ll &x : a) cin >> x;

    sort(all(a));

    ll ans = k, d = 0;
    for (ll i = 0; i < n; i++)
    {
        if (k <= (a[i] - d) * (n - i)) break;
        ans++, k -= (a[i] - d) * (n - i);
        d = a[i];
    }
    cout << ans << "\n";
}

int main()
{
    FAST_IO;

    int t; cin >> t; while (t--) solve();
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// constexpr double PI = 3.141592653589793;
// constexpr int MOD = 1000000007;

// #define ll long long
// #define ld long double
// #define ull unsigned long long
// #define vll vector<long long>
// #define vvll vector<vector<long long>>

// #define pb push_back
// #define mp make_pair
// #define fi first
// #define se second
// #define FOR(i, a, b) for (ll i = (ll)a; i < (ll)b; i++)
// #define RFOR(i, a, b) for (ll i = (ll)a; i > (ll)b; i--)
// #define all(v) (v).begin(), (v).end()
// #define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

// void solve()
// {
//     ll n, k; cin >> n >> k;
//     vll a(k);

//     for (ll &i : a) cin >> i;

//     sort(all(a));

//     ll ans = k;
//     int d = 0;
//     FOR(i, 0, n)
//     {
//         if ((a[i] - d) * (n - i) >= k) break;
//         k -= (a[i] - d) * (n - i);
//         ans++;
//         d = a[i];
//     }

//     cout << ans << "\n";
// }

// int main()
// {
//     FAST_IO;

//     int t; cin >> t; 
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }