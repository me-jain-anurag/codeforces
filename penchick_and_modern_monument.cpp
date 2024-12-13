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
        int n, count = 1, maxx = -1;
        cin >> n;
        vector<int> h(n);
        cin >> h[0];
        
        rep(i, 1, n)
        {
            cin >> h[i];
            if (h[i] == h[i - 1])
            {
                count++;
                continue;
            }
            maxx = max(count, maxx);
            count = 1;
        }
        maxx = max(count, maxx);
        
        cout << n - maxx << endl;
    }
}