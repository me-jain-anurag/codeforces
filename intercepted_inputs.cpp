#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define rep(i, x, y) for (ll i = (ll)x; i < (ll)y; i++)
using namespace std;

void solve()
{
    int k;
    cin >> k;
    vector<int> a(k);

    int res1, res2;
    rep(i, 0, k)
    {

        cin >> a[i];
        rep(j, 0, i)
        {
            if (a[i] * a[j] == k - 2)
            {
                res1 = a[i];
                res2 = a[j];
                break;
            }
        }
    }

    cout << res1 << " " << res2 << endl;

    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}