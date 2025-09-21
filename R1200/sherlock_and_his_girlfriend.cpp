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
    vector<bool> p(n + 2, true);
    p[0] = p[1] = false;
    for (int i = 2; i < n + 2; i++) {
        if (!p[i]) continue;
        for (int j = 2 * i; j < n + 2; j += i) {
            p[j] = false;
        }
    }

    if (n <= 2) {
        cout << 1 << endl;
        for (int i = 0; i < n; i++) {
            cout << 1 << " ";
        }
        return;
    }

    cout << 2 << endl;
    for (int i = 2; i < n + 2; i++) {
        cout << 2 - p[i] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}