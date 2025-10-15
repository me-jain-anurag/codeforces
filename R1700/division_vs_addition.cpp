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

    vi a(n), g(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x < 3) a[i] = x - 1;
        else a[i] = log2(x - 2) + 1;
        g[i] = x;
    }

    vi p(n + 1);
    vi co(n + 1);
    for (int i = 1; i <= n; i++) {
        if (g[i - 1] & 1) {
            if (g[i - 1] == 3 || g[i - 1] == 5) {
                co[i]++;
                continue;
            }
            int ggs = a[i - 1];
            int gogs = (1 << ggs) + 2;
            int lol = gogs - g[i - 1];
            co[i] += (lol == 1);
        };
    }

    for (int i = 1; i <= n; i++) {
        co[i] += co[i - 1];
    }

    for (int i = 1; i <= n; i++) {
        p[i] += p[i - 1] + a[i - 1];
    }

    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        cout << p[r] - p[l - 1] + ((co[r] - co[l - 1]) >> 1) << endl;
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