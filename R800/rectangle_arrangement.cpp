#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int w, h, max_w = 0, max_h = 0;
    while (n--)
    {
        cin >> w;
        cin >> h;
        max_w = max(w, max_w);
        max_h = max(h, max_h);
    }
    
    cout << 2 * (max_w + max_h) << endl;
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