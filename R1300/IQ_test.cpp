#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s[2];
    cin >> n;

    bool flag = false;

    cin >> s[0];
    for (int i = 1; i < n; i++)
    {
        cin >> s[i % 2];
        if (flag)
        {
            if (s[0] % 2 != s[1] % 2) cout << i;
            else cout << i - 1;
            return 0;
        }
        if (s[0] % 2 != s[1] % 2) flag = true;
    }
    
    if (flag)
    {
        cout << n;
    }
    
    return 0;
}