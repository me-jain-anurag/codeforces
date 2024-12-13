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
#define mp make_pair
#define fi first
#define se second
#define FOR(i, a, b) for (ll i = (ll)a; i < (ll)b; i++)
#define RFOR(i, a, b) for (ll i = (ll)a; i > (ll)b; i--)
#define all(v) (v).begin(), (v).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

// void solve()
// {
//     int n;
//     cin >> n;
    
//     umsi mp;

//     FOR(i, 0, n)
//     {
//         string s;
//         cin >> s;
//         mp[s]++;
//     }

//     auto [key, value] = *max_element(all(mp), [](auto &a, auto &b){ return a.second < b.second; });

//     cout << key << $;
// }

void solve()
{
    int n;
    cin >> n;
    string s1, s2;
    int g1 = 0, g2 = 0;

    FOR(i, 0, n)
    {
        string s;
        cin >> s;

        if (s == s1 || s1.empty())
        {
            s1 = s;
            g1++;
        }
        else
        {
            s2 = s;
            g2++;
        }
    }

    cout << ((g1 > g2) ? s1 : s2) << $;
}

int main()
{

    FAST_IO

    solve();

    return 0;
}