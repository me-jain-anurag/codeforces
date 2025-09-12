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

    vector<vll> a(n, vll(2));

    for (auto& x : a) cin >> x[0];
    for (auto& x : a) cin >> x[1];

    vi b(n);
    for (int i = 0; i < n; i++) {
        b[i] = a[i][1] - a[i][0];
    }
    sort(all(b));

    int l = 0, r = n - 1, res = 0;
    while (l < r) {
        int sum = b[r] + b[l];
        if (sum < 0) {
            l++;
        }
        else if (sum >= 0) {
            res++;
            sum = 0;
            l++, r--;
        }
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