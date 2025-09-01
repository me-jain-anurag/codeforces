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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    c -= a, d -= b;
    if (a > b) {
        swap(a, b);
    }
    if (c > d) swap(c, d);
    bool flag = (b <= (2 * a) + 2) && (d <= (2 * c) + 2);
    cout << (flag ? "YES\n" : "NO\n");
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