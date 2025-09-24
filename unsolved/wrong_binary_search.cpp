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

    vi a(n);
    vi b;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            a[i] = i + 1;
            if (cnt & 1) {
                cout << "NO\n";
                return;
            }
            b.push_back(cnt);
            cnt = 0;
        }
        else cnt++;
    }

    if (cnt & 1) {
        cout << "NO\n";
        return;
    }

    b.push_back(cnt);

    cout << "YES\n";

    cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 0) {
            while (i < n && s[i] == 0) {
                a[i] = i + b[cnt];
                b[cnt]--;
                i++;
            }
            cnt++;
            i--;
        }       
    }

    for (int i = 0; i < n; i++) cout << a[i] << " ";
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