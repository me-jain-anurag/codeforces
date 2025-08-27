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

    vi a(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    
    sort(all(a));

    auto check = [&](ll t) {
        int cnt = 1;
        int most = a[0] + 2 * t;

        for (int i = 1; i < n; i++) {
            if (a[i] > most) {
                cnt++;
                most = a[i] + 2 * t;
            }
        }

        return cnt <= 3;
    };

    int low = 0, high = a[n - 1] - a[0], ans = high;
    while (low <= high) {
        int mid = (low + high) >> 1;

        if (check(mid)) {
            ans = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }

    cout << ans << endl;
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