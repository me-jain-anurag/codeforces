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

    string x;
    cin >> x;

    bool flag = false;
    string res1 = "1", res2 = "1";
    for (int i = 1; i < n; i++) {
        if (x[i] == '0') {
            res1.push_back('0');
            res2.push_back('0');
        }
        else if (x[i] == '1' && flag) {
            res1.push_back('0');
            res2.push_back('1');
        }
        else if (x[i] == '1') {
            flag = true;
            res1.push_back('1');
            res2.push_back('0');
        }
        else if (x[i] == '2' && flag) {
            res1.push_back('0');
            res2.push_back('2');
        }
        else {
            res1.push_back('1');
            res2.push_back('1');
        }
    }

    cout << res1 << endl << res2 << endl;
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