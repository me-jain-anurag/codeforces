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
    string s;
    cin >> s;

    int i = 0;

    while (i < n) {
        if (s[i] == 'a') {
            int j = i;
            while (j >= 0 && s[j] != 'b') {
                s[j--] = 'a';
                if (j >= 0 && s[j] == 'a') break;
            }
            while (i < n && s[i] != 'b') {
                s[i++] = 'a';
            }
        }
        else i++;
    }

    int res = count(all(s), 'a');
    cout << res << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}