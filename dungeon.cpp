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
    int n, m;
    cin >> n >> m;

    multiset<int> a, a2;
    vector<pii> monsters(m);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.insert(x);
    }
    for (int i = 0; i < m; i++) {
        cin >> monsters[i].fi;
    }
    for (int i = 0; i < m; i++) {
        cin >> monsters[i].se;
    }

    vector<pii> monsters1, monsters2;
    for (int i = 0; i < m; i++) {
        if (monsters[i].se == 0) monsters2.push_back(monsters[i]);
        else monsters1.push_back(monsters[i]);
    }

    sort(all(monsters1));
    int res = 0, i = 0;
    while (i < monsters1.size()) {
        auto &[b, c] = monsters1[i];
        if (a.empty()) break;

        int cur = *a.begin();
        
        if (cur < b) {
            a.erase(a.begin());
            a2.insert(cur);
        }
        else {
            res++;
            i++;
            a.erase(a.begin());
            a.insert(max(cur, c));
        }
    }

    sort(all(monsters2)); 
    for (auto &x : a2) {
        a.insert(x);
    }

    i = 0;
    
    while (i < monsters2.size()) {
        auto &[b, c] = monsters2[i];
        if (a.empty()) {
            cout << res << endl;
            return;
        }
        int cur = *a.begin();
        if (cur < b) a.erase(cur);
        else {
            i++;
            res++;
            a.erase(a.begin());
        }
    }

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