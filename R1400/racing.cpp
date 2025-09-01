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
    vi d(n);
    for (auto& x : d) cin >> x;

    vector<vi> pnt(n, vi(2));
    for (auto& x : pnt) cin >> x[0] >> x[1];

    vi last;
    int L = 0;
    for (int i = 0; i < n; i++) {
        if (d[i] == -1) last.push_back(i);
        else L += d[i];

        int l = pnt[i][0], r = pnt[i][1];
        while (L < l) {
            if (last.empty()) {
                cout << -1 << endl;
                return;
            }
            d[last.back()] = 1;
            L++;
            last.pop_back();
        }
        while (L + last.size() > r) {
            if (last.empty()) {
                cout << -1 << endl;
                return;
            }
            d[last.back()] = 0;
            last.pop_back();
        }
    }

    for (auto& x : d) {
        cout << max(x, 0) << " ";
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