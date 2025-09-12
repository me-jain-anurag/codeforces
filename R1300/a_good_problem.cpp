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
    ll n, l, r, k;
    cin >> n >> l >> r >> k;

    if (n & 1) {
        cout << l << endl;
        return;
    }

    if (n == 2)  {
        cout << -1 << endl;
        return;
    }

    ll p = 1LL, cnt = 0;
    while (p <= l && cnt < 63) {
        p <<= 1;
        cnt++;
    }
    if (cnt > 64) {
        cout << -1 << endl;
    }

    if (p > r)  {
        cout << -1 << endl;
        return;
    }

    if (k <= n - 2) cout << l << endl;
    else cout << p << endl;
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