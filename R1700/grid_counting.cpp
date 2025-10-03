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

const int most = 2e5 + 5;
const ll m = 998244353;

ll fact[most], inv[most];

ll binpow(ll a, ll b) {
    ll res = 1LL;
    while (b > 0) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

void pre() {
    fact[0] = 1;
    for (int i = 1; i < most; i++) fact[i] = (i * fact[i - 1]) % m;
    inv[most - 1] = binpow(fact[most - 1], m - 2);
    for (int i = most - 2; i >= 0; i--) {
        inv[i] = (inv[i + 1] * (i + 1)) % m; 
    } 
}

ll com(int a, int b) {
    ll res = 1LL;
    res = res * fact[a] * inv[a - b] % m;
    res = res * inv[b] % m;
    return res;
}

void solve() {
    int n;
    cin >> n;

    vll a(n), b(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];

    ll c = n, jk = 0;
    while (c > 0) {
        b[jk] = c;
        jk++;
        c -= 2;
    }

    ll res = 1LL, k = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] > b[i] - k) {
            cout << 0 << endl;
            return;
        }
        res = (res * com(b[i] - k, a[i])) % m;
        k += a[i];
    }

    cout << (k != n ? 0 : res) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    pre();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}