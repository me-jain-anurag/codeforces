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

const int mx = 2e5 + 2;

vector<vi> divs(mx);

void pre() {
    for (int i = 2; i < mx; i++) {
        for (int j = i; j < mx; j += i) {
            divs[j].push_back(i);
        }
    }
}

void solve() {
    int n;
    cin >> n;

    vi a(n);
    for (int& x : a) {
        cin >> x;
    }

    unordered_map<int, int> mp;
    int most = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        for (int& x : divs[a[i]]) {
            mp[x]++;
            if (mp[x] > most) most = mp[x];
        }
        if (most == i + 1) cout << ans << " ";
        else {
            cout << most << " ";
            ans = most;
        }
    }

    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    pre();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}