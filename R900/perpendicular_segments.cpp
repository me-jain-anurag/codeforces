#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y, k;
    cin >> x >> y >> k;
    
    if (x >= k && y >= k)
    {
        cout << "0 0 0 " << k << endl;
        cout << "0 0 " << k << " 0" << endl;
        return;
    }
    if (x <= k && x <= y)
    {
        cout << "0 0 " << x << " " << x << endl;
        cout << 0 << " " << x  << " " << x << " 0" << endl;
        return;
    }
    if (y <= k && y < x)
    {
        cout << "0 " << "0 " << y << " " << y << endl;
        cout << "0 " << y << " " << y << " 0" << endl;
        return;
    }
}

int main()
{
    int t;
    cin >> t;
    
    while (t--) solve();
    
    return 0;
}