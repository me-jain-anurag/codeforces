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

bool isGood(vi& d, const vi& a) {
    int n = a.size();

    for (int i = 1; i < n; i++) {
        int diff = a[i] - a[i - 1];
        if (diff == 0) d[i] = d[i - 1] ^ 1;
        else if (diff > 0) d[i] = 0;
        else d[i] = 1;
    }

    int m = 1;
    for (int i = 1; i < n; i++) if (d[i] == 1) m++;
    if (a[0] != m) return false;

    for (int i = 1; i < n; i++) {
        if (d[i] == 0 && d[i - 1] == 0) m++;
        else if (d[i] == 1 && d[i - 1] == 1) m--;
        if (a[i] != m) return false;
    }

    return true;
}

void solve() {
    int n;
    cin >> n;

    vi a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vi dir(n);
    int res = 0;
    for (int c = 0; c < 2; c++) {
        for (int i = 0; i < n; i++) dir[i] = -1;
        dir[0] = c;
        if (isGood(dir, a)) res++;
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