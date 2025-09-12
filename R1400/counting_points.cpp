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
    vll a(n), r(n);

    for (auto& x : a) cin >> x;
    for (auto& x : r) cin >> x;

    map<int, ll> mp;
    for (int i = 0; i < n; i++) {
        int L = a[i] - r[i], R = a[i] + r[i];
        for (int j = L; j <= R; j++) {
            ll y = sqrt((r[i] * r[i]) - pow(j - a[i], 2));
            mp[j] = max(mp[j], 2 * y + 1);
        }
    }

    ll res = 0;
    for (auto& [key, value] : mp) {
        res += value;
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