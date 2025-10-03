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

    bool ok = true, cur = (s[0] == '1');
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        cnt += (s[i] == '0');
        if (i == 0) continue;
        if (s[i] == s[i - 1] && s[i] == '0') {
            cur = false;
        }
        if (s[i] == s[i - 1] && s[i] == '1') {
            if (cur && (cnt & 1)) ok = false;
            cur = true;
            cnt = 0;
        }
    }
    if (cur && (cnt & 1) && s[n - 1] != '0') ok = false;

    cout << (ok ? "YES\n" : "NO\n");
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