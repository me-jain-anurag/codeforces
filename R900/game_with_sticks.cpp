//Check sort, setprecision, use of max()

#include <bits/stdc++.h>
#define ll long long
#define rep(i, x, y) for(ll i = (ll)x; i < (ll)y; i++) 
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    
    if ((min(n, m) % 2) == 0) cout << "Malvika";
    else cout << "Akshat";
    
    return 0;
}