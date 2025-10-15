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

    if (k == n * n - 1) {
        cout << "NO" << endl;
        return;
    }
    
    cout << "YES" << endl;

    int m = k % n;
    int g = k / n;

    for (int i = 0; i < g; i++) {
        for (int j = 0; j < n; j++) {
            cout << "U";
        }
        cout << endl;
    }
    
    if (g == n) return;

    for (int i = 0; i < m; i++) cout << "U";
    if (m == n - 1) cout << "D\n";
    else if (m > 0) {
        int p = n - m;
        cout << "R";
        p--;
        for (int i = 0; i < p; i++) cout << "L";
        cout << endl;
    }
    else {
        cout << "R";
        for (int i = 0; i < n - 1; i++) cout << "L";
        cout << endl;
    }

    for (int i = 0; i < n - g - 1; i++) {
        cout << "R";
        for (int i = 0; i < n - 1; i++) cout << "L";
        cout << endl;
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