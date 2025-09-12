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
    int n, q;
    cin >> n >> q;
    vi a(n);
    for (auto& x : a) cin >> x;

    vi pre(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        pre[i] = (pre[i - 1] + a[i - 1]) % 2;
    }

    int g = pre[n];

    for (int i = 0; i < q; i++) {
        int l, r, k;
        cin >> l >> r >> k;
        int b = (pre[r] - pre[l - 1] + 2) % 2;
        int p = ((k & 1) == 0 || ((r - l + 1) % 2) == 0);
        p = (p + 1) % 2;
        cout << (((g + (b != p)) & 1) ? "YES\n" : "NO\n");
    }
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