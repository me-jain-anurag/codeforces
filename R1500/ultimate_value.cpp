#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vll a(n);
    for (auto& x : a) cin >> x;

    ll res = 0;
    for (int i = 0; i < n; i++) {
        if (i & 1) res += (-1 * a[i]);
        else res += a[i];
    }

    ll ans = res;
    ans = res + (n - 1) - ((n - 1) % 2);

    ll minE = LLONG_MAX / 2, minO = LLONG_MAX / 2;
    for (int i = 0; i < n; i++) {
        if (i & 1) {
            ans = max(ans, res + 2 * a[i] + i - minE);
            minO = min(minO, i - 2 * a[i]);
        }
        else {
            ll cur = i - 2 * a[i];
            ans = max(ans, res + i - 2 * a[i] - minO);
            minE = min(minE, 2 * a[i] + i);
        }
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}