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
    ll n;
    cin >> n;

    vector<ll> a(23);

    for (int i = 0; i < 23; i++) {
        a[i] = pow(3, i + 1) + i * pow(3, i - 1);
    }

    ll res = 0LL;
    for (int i = 22; i >= 0; i--) {
        ll g = pow(3, i);
        int k = n / g;
        res += k * a[i];
        n -= k * g;
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