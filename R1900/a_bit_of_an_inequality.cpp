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

const int Z = 30;
const int MAXN = 1e5 + 5;

int pref[Z][MAXN][2];
int suff[Z][MAXN][2];

void solve() {
    int n;
    cin >> n;

    vi a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < Z; i++) {
        for (int j = 1; j <= n; j++) {
            int t = !!(a[j - 1] & (1 << i));
            for (int k = 0; k < 2; k++) {
                pref[i][j][k] = pref[i][j - 1][k ^ t] + (t == k);
            }
        }
    }

    for (int i = 0; i < Z; i++) {
        suff[i][n][0] = suff[i][n][1] = 0;
        for (int j = n - 1; j >= 0; j--) {
            int t = !!(a[j] & (1 << i));
            for (int k = 0; k < 2; k++) {
                suff[i][j][k] = suff[i][j + 1][k ^ t] + (t == k);
            }
        }
    }

    ll ans = 0LL;
    for (int i = 0; i < n; i++) {
        int z = 31 - __builtin_clz(a[i]);
        ans += 1LL * pref[z][i][1] * (1 + suff[z][i + 1][0]);
        ans += 1LL * (1 + pref[z][i][0]) * suff[z][i + 1][1];
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