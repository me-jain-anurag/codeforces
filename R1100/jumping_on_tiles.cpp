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
    string s;
    cin >> s;
    int n = s.size();

    char start = s[0], end = s[n - 1];

    int cost = abs(start - end);

    vector<pair<char, int>> k;

    bool desc = (start > end);

    for (int i = 1; i < n - 1; i++) {
        if (desc) {
            if (s[i] <= start && s[i] >= end) k.push_back({s[i], i + 1});
        }
        else {
            if (s[i] >= start && s[i] <= end) k.push_back({s[i], i + 1});
        }
    }

    sort(all(k));
    int m = k.size();

    cout << cost << " " << m + 2 << endl << 1 << " ";
    if (n > 2) {
        if (desc) {
            for (int i = m - 1; i >= 0; i--) {
                cout << k[i].se << " ";
            }
        }
        else {
            for (int i = 0; i < m; i++) {
                cout << k[i].se << " ";
            }
        }
    }
    cout << n << endl;
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