#include <bits/stdc++.h>
#define ll long long
#define rep(i, x, y) for(ll i = (ll)x; i < (ll)y; i++) 
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        
        if (n % 2 == k % 2)
        {
            if (k <= sqrt(n))
            {
                cout << "YES\n";
                continue;
            }
        }
        
        cout << "NO\n";
    }
}