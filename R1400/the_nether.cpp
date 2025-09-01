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

    vector<vi> a(n);

    int most = 0;
    for (int i = 1; i <= n; i++) {
        cout << "? " << i << " " << n << " ";
        for (int j = 1; j <= n; j++) {
            cout << j << " ";
        }
        cout << endl;
        cout.flush();
        int x;
        cin >> x;
        x--;
        most = max(most, x);
        a[x].push_back(i);
    }

    vi res;
    res.push_back(a[most][0]);
    for (int i = most - 1; i >= 0; i--) {
        int start = res[most - 1 - i];
        for (int& j : a[i]) {
            cout << "? " << start << " " << 2 << " " << start << " " << j << endl;
            cout.flush();
            int x;
            cin >> x;
            if (x == 2) {
                res.push_back(j);
                break;
            }
        }
    }

    cout << "! " << most + 1 << " ";
    for (int& x : res) cout << x << " ";
    cout << endl;
    cout.flush();
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