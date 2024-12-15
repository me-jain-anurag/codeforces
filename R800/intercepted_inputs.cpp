#include <bits/stdc++.h>
using namespace std;

constexpr double PI = 3.141592653589793;
constexpr int MOD = 1000000007;

#define ll long long
#define ld long double
#define ull unsigned long long
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define umii unordered_map<int, int>
#define umll unordered_map<ll, ll>
#define umsi unordered_map<string, int>

#define $ "\n"
#define pb push_back
#define fi first
#define se second
#define FOR(i, a, b) for (ll i = (ll)a; i < (ll)b; i++)
#define RFOR(i, a, b) for (ll i = (ll)a; i > (ll)b; i--)
#define all(v) (v).begin(), (v).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

void solve()
{
    ll k;
    cin >> k;
    vector<ll> a(k);
    
    FOR(i, 0, k) cin >> a[i];
    sort(all(a));
    
    ll i = 0, j = k - 1;
    {
        while(i < j)
        {
            ll mul = a[i] * a[j];
            if (mul < k - 2) i++;
            else if (mul > k - 2) j--;
            else
            {
                cout << a[i] << " " << a[j] << endl;
                break;
            }
        }
    }
}


int main()
{
    FAST_IO

    int t; cin >> t; while (t--) { solve(); }

    return 0;
}