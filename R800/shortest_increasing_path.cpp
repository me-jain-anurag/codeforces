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
    ll x, y;
    cin >> x >> y;

    if (x < y) {
        cout << 2 << endl;
        return;
    }

    if (y == 1) {
        cout << -1 << endl;
        return;
    }

    x--;
    if (y < x) {
        cout << 3 << endl;
        return;
    }

    cout << -1 << endl;
    return;
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