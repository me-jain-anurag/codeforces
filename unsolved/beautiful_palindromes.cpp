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

    vi a(n), lol;
    vector<bool> f(n + 1, false);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (!f[a[i]]) lol.push_back(a[i]);
        f[a[i]] = true;
    }

    vi res;
    for (int i = 1; i <= n; i++) if (!f[i]) res.push_back(i);

    if (res.size() >= k) {
        for (int i = 0; i < k; i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        return;
    }

    int g = res.size();
    for (int i = 0; i < k - g; i++) {
        res.push_back(lol[i]);
    }

    for (int i = 0; i < k; i++) cout << res[i] << " ";
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