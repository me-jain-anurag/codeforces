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

bool chk(ll mid, int x, vll& a) {
    ll c = 0;
    for (int i = 0; i < a.size(); i++) {
        c += max(0LL, mid - a[i]);
    }
    return (c <= x);
}

void solve() {
    int n, x;
    cin >> n >> x;

    vll a(n);
    for (ll& p : a) cin >> p;

    ll low = 1, high = 1e9 + x, ans;
    while (low <= high) {
        ll mid = (low + high) >> 1;
        if (chk(mid, x, a)) {
            ans = mid;
            low = mid + 1;
        }
        else high = mid - 1;
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