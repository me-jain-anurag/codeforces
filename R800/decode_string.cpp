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

    string s;
    cin >> s;

    string res;

    bool flag = false;
    for (int i = n - 1; i >= 0; i--) {
        if (flag) {
            int k = 0;
            k += (s[i] - '1');
            k += (10 * (int) (s[i - 1] - '0'));
            char c = 'a' + k;
            res.push_back(c);
            i--;
            flag = false;
            continue;
        }
        if (s[i] == '0') {
            flag = true;
            continue;
        }
        char c = 'a' + (s[i] - '1');
        res.push_back(c);
    }

    reverse(all(res));
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