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
    vector<vll> pt(n, vll(3));

    for (int i = 0; i < n; i++) {
        auto& x = pt[i];
        cin >> x[0] >> x[1];
        x[2] = i + 1;
    }

    sort(all(pt), [](vll& a, vll& b) {
        if (a[0] == b[0]) return a[1] < b[1];
        return a[0] < b[0];
    });

    vi res;

    for (int i = 0; i < n; i++) {
        if (i < n - 1 && (pt[i][0] == pt[i + 1][0])) continue;
        else {
            res.push_back(pt[i][2]);
        }
    }

    cout << res.size() << endl;
    for (auto& x : res) cout << x << " ";

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