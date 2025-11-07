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

ll query(int ch, ll a, ll b) {
    cout << ch << " " << a << " " << b << endl;
    cout.flush();
    ll x; cin >> x;
    return x;
}

void answer(ll n, ll m) {
    cout << "! " << n << " " << m << endl;
    cout.flush();
}

void solve() {
    ll n;
    cin >> n;

    ll res = (n * (n + 1)) / 2;

    ll d = query(2, 1, n);
    d -= res;

    int l = 1, r = n;
    while (l < r) {
        int mid = (l + r) / 2;
        ll p = query(1, 1, mid);
        ll q = query(2, 1, mid);

        if (q - p == d) {
            r = mid;
        }
        else if (q - p == 0) {
            l = mid + 1; 
        }
        else {
            ll f = d - (q - p);
            answer(mid - (q - p) + 1, mid + f);
            return;
        }
    }

    answer(r, r);
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