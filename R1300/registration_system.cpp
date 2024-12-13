#include <bits/stdc++.h>
using namespace std;

constexpr double PI = 3.141592653589793;
constexpr int MOD = 1000000007;

#define ll long long
#define ld long double
#define ull unsigned long long
#define vll vector<long Long>
#define vvll vector<vector<long long>>

#define $ "\n"
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

    int t; cin >> t;
    unordered_map<string, int> n;
    string s;
    
    FOR(i, 0, t)
    {
        cin >> s;

        if (n.count(s) == 0)
        {
            cout << "OK"$;
            n[s] = 1;
        }
        else
        {
            cout << s << n[s] << $;
            n[s]++;
        }
    }

    return 0;
}