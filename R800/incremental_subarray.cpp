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

    vi a(m);

    cin >> a[0];
    bool flag = true;
    for (int i = 1; i < m; i++) {
        cin >> a[i];
        if (a[i] <= a[i - 1]) flag = false;
    }

    if (flag) {
        cout << (n - a[m - 1] + 1) << endl;
    }
    else cout << 1 << endl;
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