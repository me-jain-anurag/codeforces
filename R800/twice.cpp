#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
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
        int n, x, res = 0;
        cin >> n;
        vector<int> freq(n + 1, 0);
        
        rep(i, 0, n)
        {
            cin >> x;
            freq[x]++;
        }
        
        rep(i, 1, n + 1)
        {
            res += freq[i] / 2;
        }
        
        cout << res << endl;
        
    }
    
    return 0;
}