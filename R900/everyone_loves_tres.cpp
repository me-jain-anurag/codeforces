#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    
    if (n == 1 || n == 3)
    {
        cout << -1 << endl;
        return;
    }
    
    if (n % 2 == 0)
    {
        for (int i = 0; i < n - 2; i++)
        {
            cout << 3;
        }
        cout << 66 << endl;
        return;
    }
    
    for (int i = 0; i < n - 4; i++)
    {
        cout << 3;
    }
    cout << 6366 << endl;
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