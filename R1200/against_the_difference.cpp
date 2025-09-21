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
    vi a(n), occ(n + 1);
    vector<vi> pos(n + 1);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        occ[i] = pos[a[i]].size() + 1;
        pos[a[i]].push_back(i);
    }

    vi dp(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        dp[i] = dp[i - 1];
        int curInd = i - 1, cur = a[curInd];
        int k = occ[curInd];

        if (k >= cur) {
            int firstInd = k - cur;
            dp[i] = max(dp[i], dp[pos[cur][firstInd]] + cur);
        }
    }

    cout << dp[n] << endl;
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