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
    vi b(n);

    vector<vi> freq(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        freq[b[i]].push_back(i);
    }

    vi a(n);
    int cnt = 1;
    for (int i = 1; i <= n; i++) {
        if (freq[i].size() % i != 0) {
            cout << -1 << endl;
            return;
        }
        else {
            int c = 0;
            while (c < freq[i].size()) {
                for (int v = 0; v < i; v++) {
                    a[freq[i][c]] = cnt;
                    c++;
                }
                cnt++;
            }
        }
    }

    for (int& x : a) cout << x << " ";
    cout << endl;
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