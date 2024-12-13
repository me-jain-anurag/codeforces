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
        ll n;
        cin >> n;
        ll p = 3, k = 4;
        
        while (n % p != 0)
        {
            p += k;
            k *= 2;
        }
        
        cout << n / p << endl;
    }
}