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

    vector<vll> a(n, vll(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    ll res = LLONG_MAX;
    ll a00 = a[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            ll need = a[i][j] - i - j;
            if (need > a00) continue;
            vector<vll> dp(n + 1, vll(m + 1, LLONG_MAX / 2));
            dp[1][1] = (a00 - need);
            a[0][0] = need;
            for (int k = 0; k < n; k++) {
                for (int l = 0; l < m; l++) {
                    ll need = a[0][0] + k + l;
                    if (need > a[k][l]) continue;
                    if (l > 0) dp[k + 1][l + 1] = min(dp[k + 1][l + 1], dp[k + 1][l] + a[k][l] - need);
                    if (k > 0) dp[k + 1][l + 1] = min(dp[k + 1][l + 1], dp[k][l + 1] + a[k][l] - need);
                }
            }
            res = min(res, dp[n][m]);
        }
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