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
    vi a(n);

    vi freq(n + 1);

    for (auto& x : a) {
        cin >> x;
        freq[x]++;
    }

    bool flag = true;
    for (int i = 1; i <= n; i++) {
        if (freq[i] > 0) {
            if (freq[i] != i) flag = false;
        }
    }

    if (flag == false) {
        cout << -1 << endl;
        return;
    }

    for (auto& x : a) cout << x << " ";

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