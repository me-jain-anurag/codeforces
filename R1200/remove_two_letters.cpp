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


void solve()
{
    int n, count = 0;
    cin >> n;
    char s[n];
    cin >> s[0];
    cin >> s[1];
    
    FOR(i, 1, n - 1)
    {
        cin >> s[i + 1];
        if (s[i - 1] == s[i + 1]) count++;
    }
    
    cout << n - count - 1 << $;
}


int main()
{
    int t;
    cin >> t;

    while (t--) { solve(); }

    return 0;
}