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
    int a, b;
    cin >> a >> b;
    int g = a;

    int cnt = 0, i = 0;
    vi x;

    while (a > 0 || b > 0) {
        if ((a & 1) != (b & 1)) {
            cnt++;
            x.push_back(1 << i);
        }
        a >>= 1;
        b >>= 1;
        i++;
    }

    for (int j = 0; j < x.size(); j++) {
        if (g < x[j]) {
            cout << -1 << endl;
            return;
        }
    }

    cout << cnt << endl;
    if (cnt == 0) return;
    for (int j = 0; j < x.size(); j++) cout << x[j] << " ";
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