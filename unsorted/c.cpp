#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    
    bool flag;
    int i, j, len1 = n, len2 = n;
    
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    while (1)
    {
        flag = false;
        for (i = 0; i < n; i++)
        {
            if (a[i] == len1 - i)
            {
                len1 += i;
                if (i > 0) flag = true;
            }
        }
        for (i = n - 1; i > 0; i--)
        {
            if (a[i] == len2 - i)
            {
                len2 += i;
                flag = true;
            }
        }
        if (flag == false) break;
    }
    
    cout << max(len1, len2) << endl;
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