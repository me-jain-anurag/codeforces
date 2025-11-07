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

    vi a(n);
    vector<pii> s(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> s[i].fi;
    for (int i = 0; i < m; i++) cin >> s[i].se;

    sort(all(a));

    sort(all(s), [](pii x, pii y){
        if (x.fi == y.fi) return x.se > y.se;
        return x.fi < y.fi;
    });

    int cur = a[0];
    int l = 0;
    for (int i = 0; i < m; i++) {
        if (cur >= s[i].fi) {
            l++;
            if (s[i].se > 0) {
                
            }
        }
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