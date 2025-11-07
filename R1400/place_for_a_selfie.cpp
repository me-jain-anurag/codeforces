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

    vi k(n);

    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }
    sort(all(k));

    for (int i = 0; i < m; i++) {
        ll a, b, c;
        cin >> a >> b >> c;

        int h = upper_bound(all(k), b) - k.begin();
        int l = h - 1;

        int ans = INT_MIN;
        if (l >= 0 && (b - k[l]) * (b - k[l]) < 4 * a * c) ans = k[l];
        else if (h < n && (k[h] - b) * (k[h] - b) < 4 * a * c) ans = k[h];
        
        if (ans > INT_MIN) {
            cout << "YES" << endl;
            cout << ans << endl;
        }
        else cout << "NO\n";
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