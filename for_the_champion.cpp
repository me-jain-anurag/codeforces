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

ll query(string d, ll k) {
    cout << "? " << d << " " << k << endl;
    ll ans;
    cin >> ans;
    return ans;
}

void solve() {
    int n;
    cin >> n;
    ll v = 1e9;

    vector<vll> points(n, vll(2));
    ll add = INT_MAX, sub = INT_MAX;
    for (auto& x : points) {
        cin >> x[0] >> x[1];
        add = min(add, x[0] + x[1]);
        sub = min(sub, x[0] - x[1]);
    }

    ll p, q;
    query("L", v);
    query("L", v);
    query("U", v);
    p = query("U", v);
    
    query("D", v);
    query("D", v);
    query("D", v);
    q = query("D", v);
    
    ll x = (add + sub + 8 * v - p - q) / 2;
    ll y = (add - sub - q + p) / 2;

    cout << "! " << x << " " << y << endl;
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