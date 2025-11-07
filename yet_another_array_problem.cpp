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

vector<int> primes;
void pre() {
    for (int i = 2; i < 1000; i++) {
        bool flag = true;
        for (int j = 2; j * j < i; j++) {
            if (i % j == 0) {
                flag = false;
                break;
            }
        }
        if (flag) primes.push_back(i);
    }
}

void solve() {
    int n;
    cin >> n;

    vll a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < primes.size(); i++) {
        for (int j = 0; j < n; j++) {
            if (gcd(primes[i], a[j]) == 1) {
                cout << primes[i] << endl;
                return;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    pre();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}