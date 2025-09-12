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
    int n, k;
    cin >> n >> k;

    vi a(n), b(n);
    for (auto& x : a) cin >> x;
    for (auto& x : b) cin >> x;

    sort(all(a));
    sort(all(b));

    int ap = 0, bp = n - 1;
    while (ap < n && bp >= 0 && k > 0) {
        if (a[ap] < b[bp]) {
            swap(a[ap], b[bp]);
            ap++;
            bp--;
            k--;
        }
        else break;
    }
    
    int res = accumulate(all(a), 0);
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