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

vector<vector<int>> adj;
vi cnt, clr;
ll res;

void dfs(int u, int pre) {
    res += cnt[clr[u]];
    int ng = cnt[clr[u]];

    for (int v : adj[u]) {
        if (v == pre) continue;
        cnt[clr[u]] = 1;
        dfs(v, u);
    }

    cnt[clr[u]] = ng + 1;
}

void solve() {
    int n;
    cin >> n;

    clr.assign(n + 1, 0);
    cnt.assign(n + 1, 0);
    adj.assign(n + 1, vi());
    res = 0;

    for (int i = 1; i <= n; i++) cin >> clr[i];

    for (int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    dfs(1, -1);
    
    cout << res << endl;
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