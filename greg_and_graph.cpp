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

    vector<vector<int>> adj(n + 1, vi(n + 1));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> d[i][j];
        }
    }

    vi a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[n - i - 1];
    }

    vll res(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            
        }
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}