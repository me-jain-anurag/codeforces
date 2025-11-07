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

const int MOD = 1e9 + 7;

int binexp(ll a, ll b) {
    ll res = 1LL;
    while (b > 0) {
        if (b & 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}



void solve() {
    ll a, b, k;
    cni >> a >> b >> k;

    int n = (k * (a - 1) + 1) % MOD;

    int m = ((((b - 1) * k) % MOD) * comb(n, a)) % MOD + 1;

    cout << n << " " << m << endl;
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