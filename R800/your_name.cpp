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

    string s, t;
    cin >> s >> t;

    vector<int> a(26, 0), b(26, 0);
    for (int i = 0; i < n; i++) {
        a[s[i] - 'a']++;
        a[t[i] - 'a']--;
    }

    cout << (a == b ? "YES" : "NO") << endl;
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