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

    int a = count(all(s), 'a');
    int b = count(all(s), 'b');

    if (a == n || b == n) {
        cout << -1 << endl;
        return;
    }

    int d = a - b;
    if (d == 0) {
        cout << 0 << endl;
        return;
    }
    
    char q = 'a', w = 'b';
    if (d < 0) {
        d = abs(d);
        swap(q, w);
    }

    vi pre(n + 1, 0);
    unordered_map<int, int> mp;

    for (int i = 1; i <= n; i++) {
        pre[i] = pre[i - 1] + (s[i - 1] == q ? 1 : -1);
    }

    mp[0] = 0;
    int minn = n;
    for (int i = 1; i <= n; i++) {
        if (mp.find(pre[i] - d) != mp.end()) {
            minn = min(minn, i - mp[pre[i] - d]);
        }
        mp[pre[i]] = i;
    }

    cout << (minn == n ? -1 : minn) << endl;
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