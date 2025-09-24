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

    vi b(n + 1), p(n + 1);

    for (int i = 1; i <= n; i++) cin >> b[i];
    for (int i = 1; i <= n; i++) cin >> p[i];

    if (p[1] != b[p[1]]) {
        cout << -1 << endl;
        return;
    }

    vi d(n + 1, -1);
    d[p[1]] = 0;
    for (int i = 2; i <= n; i++) {
        if (d[b[p[i]]] == -1) {
            cout << -1 << endl;
            return;
        }
        d[p[i]] = d[p[i - 1]] + 1;
    }

    for (int i = 1; i <= n; i++) {
        cout << d[i] - d[b[i]] << " ";
    }
    cout << endl;
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