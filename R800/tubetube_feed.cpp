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
    int n, t;
    cin >> n >> t;
    vi a(n), e(n);
    for (int& x : a) cin >> x;
    for (int& x : e) cin >> x;

    int res = 0, time = 0, ind = -1;
    for (int i = 0; i < n; i++) {
        if (time + a[i] <= t) {
            if (e[i] > res) {
              ind = i + 1;
              res = e[i];
            }
        }
        time++;
    }

    cout << ind << endl;
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