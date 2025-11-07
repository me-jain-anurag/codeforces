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

    string s, t;
    cin >> s >> t;

    int l = n - 1, r = n - 1;
    vi a(n);
    while (l > -1) {
        if (t[r] == s[l]) {
            if (r - l > k) {
                cout << -1 << endl;
                return;
            }
            a[r] = r - l;
            if (r == l) l--;
            r--;
        }
        else l--;
    }

    if (r >= 0) {
        cout << -1 << endl;
        return;
    }

    int most = *max_element(all(a));
    cout << most << endl;
    
    for (int i = 1; i <= most; i++) {
        for (int j = n - 1; j >= 0; j--) {
            int g = min(i, a[j]);
            t[j] = s[j - g];
        }
        cout << t << endl;
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