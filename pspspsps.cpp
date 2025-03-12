#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'p')
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[j] == 's')
                {
                    cout << "NO\n";
                    return;
                }
            }
            break;
        }
        if (s[i] == 's' && i != 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[j] == 'p' && j < n - 1)
                {
                    cout << "NO\n";
                    return;
                }
            }
            break;
        }
    }
    cout << "YES\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
