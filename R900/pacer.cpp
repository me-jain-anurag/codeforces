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

    vector<vi> p(n, vi(2));
    for (auto& x : p) {
        cin >> x[0] >> x[1];
    }

    int res = m - p[n - 1][0], cur = 0, pre = 0;
    for (int i = 0; i < n; i++) {
        int c = p[i][0] - cur;
        int d = p[i][1] + 2 - pre;
        res += c - ((c & 1) != (d & 1));
        cur = p[i][0];
        pre = p[i][1];
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