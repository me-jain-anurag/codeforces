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

    vector<int> a(n);

    auto cmp = [](const vi& a, const vi& b) {
        if (a[0] != b[0]) return a[0] > b[0];
        return a[1] < b[1];
    };

    multiset<vi, decltype(cmp)> q(cmp);
    
    q.insert({n, 0, n - 1});
    int c = 1;
    while (q.size() > 0) {
        vi k = *q.begin();
        q.erase(q.begin());
        int l = k[1], r = k[2];
        
        int m = (l + r) / 2;
        a[m] = c++;

        if (l != r) {
            if (m != l) q.insert({m - l, l, m - 1});
            q.insert({r - m, m + 1, r});
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