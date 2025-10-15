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

    int rk, ck, rd, cd;
    cin >> rk >> ck >> rd >> cd;

    int ans = 0;
    if (rk < rd) ans = rd;
    else if (rd < rk) ans = n - rd;

    if (ck < cd) ans = max(ans, cd);
    else if (cd < ck) ans = max(ans, n - cd);

    cout << ans << endl;
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