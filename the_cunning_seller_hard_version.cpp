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

vector<ll> a(23), g(24);

for (int i = 0; i < 23; i++) {
    a[i] = pow(3, i + 1) + i * pow(3, i - 1);
    g[i] = pow(3, i);
}

g[23] = pow(3, 23);

bool isPossible(ll p, ll n, ll prev, int i, ll mid) {
    ll o = n - (mid * g[i]) - prev;
    if (mid * g[i] + o * g[i - 1] <= p - prev) return true;
    else return false;
}

void solve() {
    ll n, p;
    cin >> n >> p;    

    ll res = 0LL;
    prev = 0;
    for (int i = 0; i < 23; i++) {
        ll k = n / g[i];
        if (k + prev > p) {
            ll j = ((n % g[i + 1]) - prev);
            res += j * a[i];
            prev = (n % g[i + 1]);
            continue;
        }
        if (i == 0) {
            cout << 3 * n << endl;
            return;
        }
        ll low = 1, high = k, ans = -1;
        while (low <= high) {
            ll mid = low + (high - low) / 2;
            if (isPossible(p, n, prev, i, mid)) {
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        res += ans * a[i] + ((n - ans - prev) / g[i - 1]) * a[i - 1];
        break;
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