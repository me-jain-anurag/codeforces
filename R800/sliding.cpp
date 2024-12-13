#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, m, r, c;
    cin >> n >> m >> r >> c;
    
    long long res = m * (n - r) + (n * m - ((r - 1) * m + c) - n + r);
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        solve();
    }
    
    return 0;
}