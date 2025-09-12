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
    ll a, b;
    cin >> a >> b;

    if ((a & 1) && (b & 1)) {
        cout << (a * b) + 1 << endl;
        return;
    }

    if ((a & 1) == 0) {
        if (b % 2 == 0) {
            cout << (a * (b / 2)) + (2) << endl;
            return;
        }
        cout << -1 << endl;
        return;
    }

    if ((b & 1) == 0) {
        if (b % 4 == 0) {
            cout << (a * (b / 2)) + (2) << endl;
            return;
        }
        cout << -1 << endl;
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