#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define rep(i, x, y) for(ll i = (ll)x; i < (ll)y; i++) 
using namespace std;

#define MAX 1000001
vector<int> pre_sum(MAX, 0);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, q;
    cin >> n;
    vector<int> x(n);

    rep(i, 0, n)
    {
        cin >> x[i];
        pre_sum[x[i]]++;
    }

    rep(i, 0, MAX - 1)
    {
        pre_sum[i + 1] += pre_sum[i];
    }

    cin >> q;
    ll money;
    rep(i, 0, q)
    {
        cin >> money;
        if (money >= MAX)
            cout << pre_sum[MAX - 1] << endl;
        else
            cout << pre_sum[money] << endl;

    }
    
    return 0;
}