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
    int n, q;
    cin >> n >> q;

    vll c1(n + 1, 0LL), psum(n + 1, 0LL);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        c1[i + 1] = c1[i] + (x == 1);
        psum[i + 1] = psum[i] + x;
    }

    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;

        if (r == l || psum[r] - psum[l - 1] < r - l + 1 + c1[r] - c1[l - 1]) cout << "NO\n";
        else cout << "YES\n";
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