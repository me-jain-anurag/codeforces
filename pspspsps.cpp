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
#define unsi unordered_map<string, int>

#define $ "\n"
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define FOR(i, a, b) for (ll i = (ll)a; i < (ll)b; i++)
#define RFOR(i, a, b) for (ll i = (ll)a; i >= (ll)b; i--)
#define all(v) (v).begin(), (v).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool res = true;
    bool flag = false;
    FOR(i, 0, n)
    {
        if (flag)
        {
            if (s[i] == 's') res = false;
            break;
        }
        else if (s[i] == 'p') flag = true;
    }

    flag = false;
    int cnt = 0, pcnt = 0;
    FOR(i, 0, n)
    {
        if (flag)
        {
            if (s[i] == 's') cnt++;
            if (s[i] == 'p')
            {
                if (pcnt > 0)
                {
                    res = false;
                    break;
                }
                if (cnt == 0)
                {
                    if (s[0] == 's' || i == (n - 1))
                    {
                        pcnt++;
                        continue;
                    }
                    res = false;
                    break;
                }
                else if (i == n - 1) continue;
                res = false;
                break;
            }
        }
        else if (s[i] == 's') flag = true;
    }

    if (res) cout << "YES\n";
    else cout << "NO\n";
}

int main()
{
    FAST_IO

    int t;
    cin >> t;
    while (t--) { solve(); }

    return 0;
}