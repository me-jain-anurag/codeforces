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
    int l, r;
    cin >> l >> r;

    int n = 0, k = l;
    while (k > 0) {
        n++;
        k /= 10;
    }

    string x = to_string(l), y = to_string(r);

    int res = 0;
    for (int i = 0; i < n; i++) {
        if (x[i] == y[i]) res += 2;
        else if ((int) (y[i] - x[i]) == 1) {
            res++;
            while (i < n - 1 && x[i + 1] == '9' && y[i + 1] == '0') {
              res++;
              i++;
            }
            break;
        }
        else break;
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