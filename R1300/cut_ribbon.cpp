//Check sort, setprecision, use of max()

#include <bits/stdc++.h>
#define ll long long
#define rep(i, x, y) for(ll i = (ll)x; i < (ll)y; i++) 
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    
    int res = 0;
    for (int i = n / a; i >= 0; --i)
    {
        int no_a = n - i * a;
        for (int j = no_a / b; j >= 0; --j)
        {
            int no_ab = no_a - j * b;
            if (no_ab % c == 0)
            {
                res = max(i + j + no_ab / c, res);
            }
        }
    }
    
    cout << res;
    
    return 0;
}