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
    ll n, k, q;
    cin >> n >> k >> q;

    vll a(n);

    for (auto& x : a) cin >> x;

    ll res = 0, l = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > q) {
            l = i + 1;
            continue;
        }

        ll len = (i - l + 1) - (k - 1);
        res += max(0LL, len);
    }

    cout << res << endl;
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