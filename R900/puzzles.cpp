#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, smallest_diff = INT_MAX;
    cin >> m >> n;
    vector<int> a(n);

    for (int &x : a) cin >> x;

    sort(a.begin(), a.end());

    for (int i = 0; i <= n - m; i++)
    {
        smallest_diff = min(smallest_diff, a[i + m - 1] - a[i]);
    }

    cout << smallest_diff;
}

int main()
{
    solve();
    return 0;
}