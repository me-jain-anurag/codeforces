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
    vi a(n);

    int most = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        most = max(a[i], most);
    }

    if (most > a[0] && most > a[n - 1]) {
        cout << -1 << endl;
        return;
    }

    vi p, q;
    int l = 0, r = n - 1;
    while (l <= r) {
        if (a[l] > a[r]) q.push_back(a[l++]);
        else p.push_back(a[r--]);
    }

    reverse(all(q));

    for (int i = 0; i < p.size(); i++) {
        q.push_back(p[i]);
    }

    for (int i = 0; i < n; i++) {
        cout << q[i] << " ";
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