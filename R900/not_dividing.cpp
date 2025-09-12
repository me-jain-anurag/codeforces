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
    vi a(n);
    for (auto& x : a) cin >> x;

    for (int i = 1; i < n; i++) {
        if (a[i - 1] == 1) a[i - 1]++;
        while ((a[i] % a[i - 1]) == 0) ++a[i];
    }
    for (int i = 1; i < n; i++) {
        if (a[i - 1] == 1) a[i] += ((a[i] & 1) == 0);
        while ((a[i] % a[i - 1]) == 0) ++a[i];
    }

    for (auto& x : a) cout << x << " ";
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