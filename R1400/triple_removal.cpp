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

    vi a(n), pre(n + 1), co(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) co[i + 1]++;
    }

    for (int i = 0; i < n - 1; i++) {
        if (a[i] == a[i + 1]) pre[i + 1]++;
    }

    for (int i = 0; i < n; i++) {
        pre[i + 1] += pre[i];
        co[i + 1] += co[i];
    }

    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        int res = (pre[r - 1] - pre[l - 1] == 0);
        int len = r - l + 1;
        int g = co[r] - co[l - 1];
        if ((g % 3) || (len - g) % 3) {
            cout << -1  << endl;
            continue;
        }
        res += g / 3 + (len - g) / 3;
        cout << res << endl;
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