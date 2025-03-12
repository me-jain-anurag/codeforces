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

#define $ " \n"
#define pb push_back
#define fi first
#define se second
#define FOR(i, a, b) for (ll i = (ll)a; i < (ll)b; i++)
#define RFOR(i, a, b) for (ll i = (ll)a; i > (ll)b; i--)
#define all(v) (v).begin(), (v).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

void solve()
{
    ll n;
    cin >> n;
    vll a(n);
    for(ll &num : a) cin >> num;
    
    vector<bool> check(n + 1);
    ll filler = 1;
    for (int i = 0; i < n; i++)
    {
        ll b;
        if (check[a[i]])
        {
            while(check[filler])
            {
                filler++;
            }
            b = filler;
        }
        else
        {
            b = a[i];
        }
        check[b] = true;
        cout << b << $[i == n - 1];
    }
    
}

int main()
{

    FAST_IO

    int t;
    cin >> t;

    while (t--) { solve(); }

    return 0;
}