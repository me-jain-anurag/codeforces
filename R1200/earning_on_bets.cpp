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

    vi a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    ll most = 1e9, res = INT_MAX, total = 0LL;
    vi b(n);

    for (int i = 0; i < n; i++) {
        ll least = (most / a[i]) + 1;
        res = min(res, least * a[i]);
        total += least;
        b[i] = least;
    }

    if (total < most) {
        for (int i = 0; i < n; i++) cout << b[i] << " ";
        cout << endl;
    }
    else cout << -1 << endl;
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