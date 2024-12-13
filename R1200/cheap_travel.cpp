#include <bits/stdc++.h>
#define ll long long
#define rep(i, x, y) for(ll i = (ll)x; i < (ll)y; i++) 
using namespace std;

int solve(int n, int m, int a, int b)
{
    if (b > a * m) return n * a;

    int s = (n % m) * a;
    int better = (b < s) ? b : s;
    return ((n / m) * b + better);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    
    int res = solve(n, m, a, b);
    
    cout << res;
    
    return 0;
}