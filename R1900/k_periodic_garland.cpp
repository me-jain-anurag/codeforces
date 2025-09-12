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

    string s;
    cin >> s;

    int ones = count(all(s), '1');
    vector<string> a(k);
    for (int i = 0; i < n; i++) {
        a[i % k].push_back(s[i]);
    }

    int res = 0;
    for (string& x : a) {
        int cnt = 0, most = 0;
        for (char& c : x) {
            if (c == '1') cnt++;
            else cnt--;
            most = max(cnt, most);
            if (cnt < 0) cnt = 0;
        }
        res = max(res, most);
    }

    cout << ones - res << endl;
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