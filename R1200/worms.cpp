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

    vi pre(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> pre[i];
        pre[i] += pre[i - 1];
    }

    int k;
    cin >> k;
    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        cout << (lower_bound(all(pre), x) - pre.begin()) << endl; 
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}