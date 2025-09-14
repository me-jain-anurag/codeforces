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

    ll res = 0LL;
    vll o, e;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x & 1) o.push_back(x);
        else e.push_back(x);
    }

    if (o.size() == 0) {
        cout << 0 << endl;
        return;
    }

    for (auto& x : e) {
        res += x;
    }

    sort(all(o));
    int g = (o.size() + 1) / 2, i = o.size() - 1;
    for (; g > 0; g--) {
        res += o[i];
        i--;
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