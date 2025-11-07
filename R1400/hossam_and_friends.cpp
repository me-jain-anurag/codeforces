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
    int n, m;
    cin >> n >> m;

    vi a(n + 1, n + 1);

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        if (y < x) swap(x, y);
        a[x] = min(a[x], y);
    }

    for (int i = n - 1; i > 0; i--) {
        a[i] = min(a[i], a[i + 1]);
    }

    ll res = 0LL;
    for (int i = 1; i <= n; i++) {
        res += (a[i] - i);
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