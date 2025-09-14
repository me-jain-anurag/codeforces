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

bool check(int target, const vi& a) {
    int x = target;
    int sum = 0;
    for (int i = 0; i < a.size(); i++) {
        sum += a[i];
        if (i < (a.size() - 1) && sum == x) x += target;
        else if (sum > x) return false;
    }
    return (sum == x);
}

void solve() {
    int n;
    cin >> n;

    vi a(n);
    int sum = 0;
    for (auto& x : a) {
        cin >> x;
        sum += x;
    }

    vi target(n);
    target[0] = a[0];
    for (int i = 1; i < n; i++) {
        target[i] += target[i - 1] + a[i];
    }

    int ans = sum;
    for (int i = 0; i < n; i++) {
        if (check(target[i], a)) {
            ans = target[i];
            break;
        }
    }

    cout << n - (sum / ans) << endl;
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