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
    ll n;
    cin >> n;
    
    vector<ll> ans;
    int res = 0;

    ll g = 100000000000000001;
    while (g >= 11) {
        if (n % g == 0) {
            res++;
            ans.push_back(n / g);
        }
        g /= 10;
        g += 1;
    }

    cout << res;
    if (ans.size() > 0) {
      cout << endl;
      for (ll& u : ans) cout << u << " ";
    }
    cout << endl;
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