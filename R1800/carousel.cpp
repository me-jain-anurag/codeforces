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
    for (int i = 0; i < n; i++) cin >> a[i];

    int cnt = 1, fl = -1;
    for (int i = 1; i < n; i++) {
        if (fl == -1 && a[i] == a[i - 1]) fl = i - 1;
        if (a[i] != a[i - 1]) {
            cnt++;
        }
    }

    if (cnt == 1) {
        cout << 1 << endl;
        for (int i = 0; i < n; i++) cout << 1 << " ";
        cout << endl;
        return;
    }

    if (n % 2 == 0) {
        cout << 2 << endl;
        for (int i = 0; i < n; i++) {
            cout << 1 + (i & 1) << " ";
        }
        cout << endl;
        return;
    }

    if (fl == -1 && a[0] != a[n - 1]) {
        cout << 3 << endl;
        cout << 3 << " ";
        for (int i = 1; i < n; i++) {
            cout << 1 + (i & 1) << " ";
        }
        cout << endl;
        return;
    }

    cout << 2 << endl;
    for (int i = 0; i < n; i++) {
        if (i > fl) cout << 2 - (i & 1) << " "; 
        else cout << 1 + (i & 1) << " ";
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