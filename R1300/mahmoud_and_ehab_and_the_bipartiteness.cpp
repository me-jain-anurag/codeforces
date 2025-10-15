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

void dfs(int u, vector<vi>& adj, vi& color, int par=0) {
    color[u] = (color[par] + 1) & 1;
    for (int c : adj[u]) {
        if (c == par) continue;
        dfs(c, adj, color, u);
    }
}

void solve() {
    ll n;
    cin >> n;
    vector<vi> adj(n + 1);
    vi color(n + 1, 0);

    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(1, adj, color);

    ll l = count(all(color), 0) - 1, r = count(all(color), 1);

    cout << l * r - n + 1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}