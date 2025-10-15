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

    vi indegree(n + 1, 0), points(n + 1);

    for (int i = 1; i <= n; i++) {
        int& x = points[i];
        cin >> x;
        indegree[x]++;
    }

    queue<int> q;
    for (int i = 1; i <= n; i++) {
        if (indegree[i] == 0) q.push(i);
    }

    int l = 2, g = q.size();
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        indegree[points[x]]--;
        if (indegree[points[x]] == 0) q.push(points[x]);
        g--;
        if (g == 0) {
            g = q.size();
            l++;
        }
    }

    cout << l << endl;
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