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

ll query(ll a, ll b) {
    cout << "? " << a << " " << b << endl;
    cout.flush();
    ll x; cin >> x;
    return x;
}

void answer(ll n) {
    cout << "! " << n << endl;
    cout.flush();
}

void solve() {
    for (int i = 2; i < 2 + 25; i++) {
        ll x = query(1, i);
        ll y = query(i, 1);

        if (x == -1) {
            answer(i - 1);
            return;
        }

        if (x != y) {
            answer(x + y);
            return;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 50;
    while (t--) {
        solve();
    }
    return 0;
}