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
#define ld long double

const int mx = 1e6 + 5;
vector<bool> isPrime(mx, true);

void is_prime() {
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < mx; i++) {
        for (int j = 2 * i; j < mx; j += i) {
            isPrime[j] = false;
        }
    }
}

unordered_set<ll> st;
void pre() {
    for (ll i = 2ll; i < mx; i++) {
        if (isPrime[i]) st.insert(i * i);
    }
}

void solve() {
    ld n;
    cin >> n;

    cout << (st.contains(n) ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    is_prime();
    pre();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}