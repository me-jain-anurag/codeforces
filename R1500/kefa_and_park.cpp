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

vector<bool> cat;
vector<vi> adj;
int ans;

void dfs(int v, int p, int m, int cnt = 0) {
    cat[v] ? cnt++ : cnt = 0;
    if (cnt > m) return;

    for (int u : adj[v]) if (u != p) dfs(u, v, m, cnt);

    if (v != 1 && adj[v].size() == 1) ans++;
}

void solve() {
    int n, m;
    cin >> n >> m;

    cat.assign(n + 1, false);
    adj.assign(n + 1, vi());
    ans = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cat[i + 1] = x == 1;
    }

    for (int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    dfs(1, -1, m);

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}