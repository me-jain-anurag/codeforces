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

    vll a(n);

    if (k == 1) {
        for (auto& x : a) {
            cin >> x;
            x += (x & 1);
            cout << x << " ";
        }
        cout << endl;
        return;
    }

    for (auto& x : a) cin >> x;
    int p = k % 3;

    for (int i = 0; i < n; i++) {
        int g = a[i] % (k + 1);
        cout << a[i] + (ll) k * g << " ";
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