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

    vi a(2 * n);
    cin >> a[0];
    for (int i = 1; i < 2 * n; i++) {
        cin >> a[i];
        a[i] -= a[0];
    }
    a[0] = 0;

    vll o, e;
    for (int i = 1; i < 2 * n; i += 2) {
        o.push_back(a[i] - a[i - 1]);
    }

    for (int i = 2; i < 2 * n; i += 2) {
        e.push_back(a[i] - a[i - 1]);
    }

    int x = o.size(), y = e.size();
    for (int i = 0; i < x / 2; i++) {
        o[i] += o[x - 1 - i];
    }

    for (int i = 0; i < y / 2; i++) {
        e[i] += e[y - 1 - i];
    }
    
    x /= 2;
    y /= 2;

    for (int i = x - 1; i > 0; i--) {
        o[i - 1] += o[i];
    }

    for (int i = y - 1; i > 0; i--) {
        e[i - 1] += e[i];
    }

    ll p = o[0], o1 = 1, e1 = 0;
    for (int i = 0; i < n; i++) {
        cout << p << " ";
        if (i & 1 && o1 < x) {
            p += o[o1];
            p += o[o1];
            o1++;
        }
        else if (e1 < y) {
            p += e[e1];
            p += e[e1];
            e1++;
        }
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