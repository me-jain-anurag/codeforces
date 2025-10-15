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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int c0 = count(all(s), '0');
    int c1 = count(all(s), '1');
    int c2 = count(all(s), '2');

    string res;
    for (int i = 0; i < c0; i++) res += '-';
    int g = n - c0 - c1;
    if (g == c2) for (int i = 0; i < g; i++) res += '-';
    else if (g <= 2 * c2) {
        for (int i = 0; i < g; i++) {
            res += '?';
        }
    }
    else {
        for (int i = 0; i < c2; i++) res += '?';
        for (int i = 0; i < g - 2 * c2; i++) res += '+';
        for (int i = 0; i < c2; i++) res += '?';
    }
    for (int i = 0; i < c1; i++) res += '-';

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