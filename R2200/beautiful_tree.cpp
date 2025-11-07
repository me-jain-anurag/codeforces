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

    if (n == 2) cout << -1 << endl;
    else if (n == 3) cout << "1 3" << endl << "2 3" << endl;
    else if (n == 4) cout << "1 4" << endl << "1 2" << endl << "1 3" << endl;
    else {
        cout << "1 2" << endl << "2 3" << endl << "3 4" << endl;
        cout << "1 " << n << endl;
        for (int i = 5; i < n; i++) {
            cout << "2 " << i << endl;
        }
    }
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