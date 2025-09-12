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
    int n, m, l;
    cin >> n >> m >> l;
    vector<vi> special;
    special.reserve(n + m);

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        special.push_back({x, y, 0});
    }
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        special.push_back({x, y, 1});
    }
    sort(all(special));

    multiset<int, greater<int>> st;
    int res = 0, k = 0;

    for (int i = 0; i < m + n; i++) {
        if (special[i][0] >= l) break;
        if (special[i][2] == 0) {
            while (k < special[i][1] - special[i][0] + 1) {
                if (st.empty()) {
                    cout << -1 << endl;
                    return;
                }
                auto it = st.begin();
                k += *it;
                st.erase(it);
                res++;
            }
        }
        else {
            st.insert(special[i][1]);
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