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
    unordered_map<int, int> mp;
    for (auto& x : a) {
        cin >> x;
        mp[x]++;
    }

    unordered_map<int, int> g;
    for (auto& [y, v] : mp) {
        if (v % k != 0) {
            cout << 0 << endl;
            return;
        }
        g[y] = (v / k);
        v = 0;
    }

    int l = 0;
    ll res = 0LL;
    for (int r = 0; r < n; r++) {
        mp[a[r]]++;
        while (mp[a[r]] > g[a[r]]) {
            mp[a[l]]--;
            if (mp[a[l]] == 0) {
                mp.erase(a[l]);
            }
            l++;
        }
        res += (r - l + 1LL);
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