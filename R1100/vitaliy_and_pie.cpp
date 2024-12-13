#include <bits/stdc++.h>
using namespace std;

constexpr double PI = 3.141592653589793;
constexpr int MOD = 1000000007;

#define $ "\n"
#define ll long long
#define ld long double
#define ull unsigned long long
#define vll vector<long Long>
#define vvll vector<vector<long long>>

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define FOR(i, a, b) for (ll i = (ll)a; i < (ll)b; i++)
#define RFOR(i, a, b) for (ll i = (ll)a; i > (ll)b; i--)
#define all(v) (v).begin(), (v).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    FAST_IO;

    int t, res = 0;
    cin >> t;
    string s;
    cin >> s;
    unordered_map<char, int> keys;

    FOR(i, 0, 2 * t - 2)
    {
        if (islower(s[i]))
        {
            keys[toupper(s[i])]++;
            continue;
        }

        if (keys[s[i]] > 0)
        {
            keys[s[i]]--;
            continue;
        }

        res++;
    }
    
    cout << res;

    return 0;
}