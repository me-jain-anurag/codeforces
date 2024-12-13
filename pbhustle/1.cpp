//fuchsia_wn pb_hustle
#include <bits/stdc++.h>
#define rep(x, a, b) for(x = (int)(a); x < (int)(b); x++)

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, k, i, sum = 0;
        cin >> n >> k;

        if (k >= 4)
        {
            if (n % 2 != 0) k -= 3; 
            if (k % 4 == 0) cout << "YES" << endl;
            else cout << "NO" << endl;
            continue;
        }
        for (i = n - k + 1; i <= n; i++)
        {
            sum += (i % 2);
        }

        if (sum % 2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}