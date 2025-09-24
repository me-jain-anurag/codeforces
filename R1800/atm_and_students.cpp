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
    ll n, k;
    cin >> n >> k;

    vll a(n);
    for (auto& x : a) cin >> x;

    int res = 0, l = 0;
    ll sum = k;
    pii p;
    for (int r = 0; r < n; r++) {
        sum += a[r];
        while (sum < 0) {
            sum -= a[l++];
        }
        if (r - l + 1 > res) {
            p = {l + 1, r + 1};
            res = r - l + 1;
        }
    }

    if (res == 0) cout << -1 << endl;
    else cout << p.fi << " " << p.se << endl;
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