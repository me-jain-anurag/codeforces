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

const int MAX = 1000005;
int cnt[MAX];

void solve() {
    int n;
    cin >> n;
    vll a(n);
    for (ll& x : a) {
        cin >> x;
        cnt[x]++;
    }

    ll res = 0;

    for (int i = 0; i < n; i++) {
        if (cnt[a[i]] == 0) continue;
        int c = cnt[a[i]];
        res += 1ll * (c - 1) * (c - 2);
        for (ll b = 2; a[i] * b * b <= MAX; b++) {
            ll x = a[i] * b;
            ll y = x * b;
            res += (1ll * cnt[x] * cnt[y]);
        }
    }

    cout << res << endl;
    for (ll& x : a) cnt[x]--;
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