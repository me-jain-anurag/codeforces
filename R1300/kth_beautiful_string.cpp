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
    ll n, k;
    cin >> n >> k;

    ll cnt = 1, g = 2;
    while (k > cnt) {
        cnt += g;
        g++;
    }

    string res;
    for (int i = 0; i < n - g; i++) {
        res.push_back('a');
    }

    res.push_back('b');

    int h = cnt - k;
    for (int i = 0; i < h; i++) {
        res.push_back('a');
    }

    res.push_back('b');

    while (res.size() < n) {
        res.push_back('a');
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