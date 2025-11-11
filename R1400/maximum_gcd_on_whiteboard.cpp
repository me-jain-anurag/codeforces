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
    int n, k;
    cin >> n >> k;

    vi a(n);
    vi cnt(n + 1), smol(n + 1), pre(n + 1);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }

    for (int i = 1; i <= n; i++) {
        pre[i] += pre[i - 1] + cnt[i];
    }

    for (int i = 1; i <= n; i++) {
        smol[i] = pre[min(n, 4 * i - 1)];
        smol[i] -= cnt[i];
        if (2 * i <= n) smol[i] -= cnt[2 * i];
        if (3 * i <= n) smol[i] -= cnt[3 * i];
    }

    int res = 1;
    for (int i = 2; i <= n; i++) {
        if (smol[i] <= k) res = i;
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