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

    bool flag = true;
    vi a(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[i] = x;
    }

    for (int i = 0; i < n - 2; i++) {
        if (a[i] < 0) flag = false;
        a[i + 2] -= a[i];
        a[i + 1] -= 2 * a[i];
        a[i] = 0;
    }

    flag = flag && (count(all(a), 0) == n);

    cout << (flag ? "YES" : "NO") << endl;
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