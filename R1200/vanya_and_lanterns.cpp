//Check sort, setprecision, use of max()

#include <bits/stdc++.h>
#define ll long long
#define rep(i, x, y) for(ll i = (ll)x; i < (ll)y; i++) 
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll n, l, max_diff = 0;
    cin >> n >> l;
    vector<ll> a(n);
    
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    
    rep(i, 1, n)
    {
        max_diff = max(max_diff, a[i] - a[i - 1]);
    }
    
    double res = max_diff / 2.0;
    res = max({res, (double)a[0], (double)(l - a[n - 1])});
    
    cout << fixed << setprecision(10) << res;
    
    return 0;
}