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
    int n;
    cin >> n;

    vll a(n), o, e;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i & 1) e.push_back(a[i]);
        else o.push_back(a[i]);
    }

    ll res = 0LL;
    bool k = (n % 2 == 0);

    for (int i = n / 2 - 1; i >= 0; i--) {
        if (k && i == n / 2 - 1) {
            if (o[i] > e[i]) {
                res += o[i] - e[i];
                o[i] = e[i];
            }
        }
        else {
            if (o[i + 1] > e[i]) {
                res += o[i + 1] - e[i];
                o[i + 1] = e[i];
            }
    
            if (o[i + 1] + o[i] > e[i]) {
                res += (o[i + 1] + o[i] - e[i]);
                o[i] = e[i] - o[i + 1];
            }
        };
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