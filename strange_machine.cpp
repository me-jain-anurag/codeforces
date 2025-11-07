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
    int n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    bool flag = false;
    int c = 0;
    vi a;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') flag = true; 
    }

    if (!flag) {
        c = count(all(s), 'A');
        for (int i = 0; i < q; i++) {
            int x;
            cin >> x;
            cout << x << endl;
        }
    }
    else {
        for (int i = 0; i < q; i++) {
            int x;
            cin >> x;

            c = 0;
            
            while (x > 0) {
                if (s[c % n] == 'B') x /= 2;
                else x--;
                c++;
            }
            cout << c << endl;
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