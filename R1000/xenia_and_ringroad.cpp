//Check sort, setprecision, use of max()

#include <bits/stdc++.h>
#define ll long long
#define rep(i, x, y) for(ll i = (ll)x; i < (ll)y; i++) 
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll n, m;
    cin >> n >> m;
    vector<ll> a(m);
    cin >> a[0];
    
    ll res = a[0] - 1;
    rep(i, 1, m)
    {
        cin >> a[i];
        
        if (a[i] < a[i - 1])
        {
            res += (n - a[i - 1] + a[i]);
        }
        else
        {
            res += a[i] - a[i - 1];
        }
    }
    
    cout << res;
    
    return 0;
}