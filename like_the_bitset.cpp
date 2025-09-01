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
    vector<int> a(n, 0);

    int cnt = 1, cl = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            cl++;
            a[i] = cnt;
            cnt++;
        }
        else {
            cl = 0;
        }
        if (cl == k) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) a[i] = cnt++;
        cout << a[i] << " ";
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