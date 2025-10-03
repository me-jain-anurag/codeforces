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
    ll sum = 0LL, p = 0;

    map<int, int> mp;
    for (int& x : a) {
        cin >> x;
        if (x & 1) {
            mp[x]++;
            p += x - 1;
        }
        else p += x;
        sum += x;
    }
    
    vi s;
    for (auto& [k, v] : mp) s.push_back(v);

    sort(all(s), greater<int>());

    ll x = p / 2;

    for (int i = 0; i < s.size(); i += 2) {
        x += s[i];
    }    

    cout << x << " " << sum - x << endl;
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