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
    ll n;
    cin >> n;
    
    ll g = 2 * (n - 1);
    g = g * g;

    ll p = g - n * n;
    ll d = p % n;
    p /= n;

    vll a(n);
    for (int i = 0; i < n; i++) {
        a[i] = 2 * i + 1 + p;
    }

    for (int i = n - 2; i > 1; i--) {
        if (d == 0) break;
        a[i] += 1;
        d--;
    }

    a[1] += d;

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
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