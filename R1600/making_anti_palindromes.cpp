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
    string s;
    cin >> s;
    if (n & 1) {
        cout << -1 << endl;
        return;
    }
    
    vi a(26), b(26);
    for (int i = 0; i < n / 2; i++) {
        if (s[i] == s[n - 1 - i]) a[s[i] - 'a']++;
        b[s[i] - 'a']++;
        b[s[n - 1 - i] - 'a']++;
    }

    int k = 0, m = 0;
    for (int i = 0; i < 26; i++) {
        if (b[i] > n / 2) {
            cout << -1 << endl;
            return;
        }
        k += a[i];
        m = max(m, a[i]);
    }

    cout << max(m, (k + 1) / 2) << endl;
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