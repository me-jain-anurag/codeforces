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

    vector<vi> a(n);
    int most = 0;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        most = max(most, k);
        for (int j = 0; j < k; j++) {
            int x;
            cin >> x;
            a[i].push_back(x);
        }
    }

    vi res(most);
    int i = 0;

    while (i < most) {
        int best = -1;

        for (int j = 0; j < n; j++) {
            if (a[j].size() > i) {
                best = j;
                break;
            }
        }

        for (int j = best + 1; j < n; j++) {
            if (a[j].size() <= i) continue;
            if (lexicographical_compare(a[j].begin() + i, a[j].end(), a[best].begin() + i, a[best].end())) {
                best = j;
            }
        }
        
        for (; i < a[best].size(); i++) {
            res[i] = a[best][i];
        }
    }

    for (int i = 0; i < most; i++) {
        cout << res[i] << " ";
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