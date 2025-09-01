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
    ll n, k;
    cin >> n >> k;

    vector<ll> a(37);

    for (int i = 0; i < 37; i++) {
        a[i] = pow(3, i + 1) + i * pow(3, i - 1);
    }

    vll num;
    ll x = n;
    int p = 0;

    while (x > 0) {
        p += x % 3;
        num.push_back(x % 3);
        x /= 3;
    }

    if (p > k) {
        cout << -1 << endl;
        return;
    }

    ll res = 0LL;
    int s = num.size();

    for (int i = s - 1; i > 0; i--) {
        int x = min(num[i], (k - p) >> 1);
        num[i] -= x;
        num[i - 1] += 3 * x;
        p += 2 * x;
        if (p + 2 > k) break;
    }

    for (int i = 0; i < s; i++) {
        res += num[i] * a[i];
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