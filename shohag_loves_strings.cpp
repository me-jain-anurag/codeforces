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

void solve()
{
    string s;
    cin >> s;
    int len = s.size();

    if (len < 2)
    {
        cout << -1 << $;
        return;
    }

    FOR(i, 0, (len - 1))
    {
        if (s[i] == s[i + 1])
        {
            cout << s.substr(i, 2) << $;
            return;
        }

        if(i < len - 2)
        {
            if (s[i] != s[i + 1] && s[i] != s[i + 2] && s[i + 1] != s[i + 2])
            {
                cout << s.substr(i, 3) << $;
                return;
            }
        }
    }

    cout << -1 << $;
}

int main()
{

    FAST_IO

    int t;
    cin >> t;

    while (t--) { solve(); }

    return 0;
}