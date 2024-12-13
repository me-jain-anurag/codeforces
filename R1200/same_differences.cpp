#include <bits/stdc++.h>
using namespace std;

constexpr double PI = 3.141592653589793;
constexpr int MOD = 1000000007;

#define $ "\n"
#define ll long long
#define ld long double
#define ull unsigned long long
#define vll vector<long long>
#define vvll vector<vector<long long>>

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define FOR(i, a, b) for (ll i = (ll)a; i < (ll)b; i++)
#define RFOR(i, a, b) for (ll i = (ll)a; i > (ll)b; i--)
#define all(v) (v).begin(), (v).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

// using hashing O(n)

void solve()
{
    int n;
    cin >> n;
    unordered_map<ll, ll> freq;

    FOR(i, 0, n)
    {
        int x;
        cin >> x;
        freq[x - i]++; 
    }

    ll res = 0;
    for (auto &it : freq)
    {
        res += (it.se * (it.se - 1)) / 2;
    }

    cout << res << $;
}



int main()
{
    int t;
    cin >> t;

    while (t--) { solve(); }

    return 0;
}








// using sorted array O(nlogn)
// int main()
// {
//     FAST_IO;

//     int t;
//     cin >> t;
    
    
//     while (t--)
//     {
//         ll n, k, res = 0;
//         cin >> n;
//         vll a(n, 0);
        
//         FOR(i, 0, n)
//         {
//             cin >> k;
//             a[i] = k - i;
//         }
        
//         sort(all(a));
        
//         ll count = 1;
//         FOR(i, 1, n)
//         {
//             if (a[i] == a[i - 1])
//             {
//                 count++;
//             }
//             else
//             {
//                 res += (count * (count - 1)) / 2;
//                 count = 1;
//             }
//         }
        
//         res += (count * (count - 1)) / 2;
        
//         cout << res << $;
//     }

//     return 0;
// }