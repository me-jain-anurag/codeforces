//Check sort, setprecision, use of max()

#include <bits/stdc++.h>
#define ll long long
#define rep(i, x, y) for(ll i = (ll)x; i < (ll)y; i++) 
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, min_ind = 0, max_ind = 0;
    cin >> n;
    vector<int> a(n);
    cin >> a[0];
    
    rep(i, 1, n)
    {
        cin >> a[i];
        if (a[i] > a[max_ind]) max_ind = i;
        if (a[i] <= a[min_ind]) min_ind = i;
    }
    
    int res = (max_ind - 1) + (n - min_ind);
    if (max_ind > min_ind) res--;
    
    cout << res;
    
    return 0;
}