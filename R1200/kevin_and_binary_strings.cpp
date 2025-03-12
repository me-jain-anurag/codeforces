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
    string s;
    cin >> s;
    int len = s.length();

    int first = len - 1, ex = 1;
    bool flag = false;
    FOR(i, 1, len)
    {
        if (flag)
        {
            if (ex == first) break;
            if (s[i] == '0') ex++;
            else break;
        }
        else
        {
            if (s[i] == '0')
            {
                flag = true;
                first = i;
            }
        }
    }

    if (first == len - 1)
    {
        cout << "1 " << len << " 1 1\n";
        return;
    }
    int nlen = len - first;
    cout << 1 << " " << len << " ";
    cout << first - ex + 1 << " " << first - ex + nlen << $;

}

int main()
{
    FAST_IO

    int t;
    cin >> t;
    while (t--) { solve(); }

    return 0;
}