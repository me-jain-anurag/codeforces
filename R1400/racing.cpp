#include <bits/stdc++.h>
using namespace std;

constexpr double PI = 3.141592653589793;
constexpr int MOD = 1000000007;

#define ll long long
#define ld long double
#define ull unsigned long long
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define usl unordered_set<ll>
#define umll unordered_map<ll, ll>
#define umsi unordered_map<string, int>

#define fi first
#define se second
#define FOR(i, a, b) for (ll i = (ll)a; i < (ll)b; i++)
#define RFOR(i, a, b) for (ll i = (ll)a; i > (ll)b; i--)
#define all(v) (v).begin(), (v).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int& i : a) cin >> i;
    vector<int> sol(n);
    int res = 0;
    int lvl_max = 1, lvl_min = 0;
    for (int i = 0; i < n; i++)
    {
        int p, q;
        cin >> p >> q;
        if (a[i] > -1)
        {
            sol[i] = a[i];
            lvl_min += a[i];
            lvl_max += a[i];
        }
        else
        {
            lvl_max += 1;
        }
        if ((lvl_max < p || lvl_min > q))
        {
            while (i++ < n) cin >> p >> q;
            cout << -1 << endl;
        }
        else if (lvl_max >= p && lvl_min < p)
        {
            while (lvl_min++ < p)
            {
                if (res == i + 1)
                {
                    while (i++ < n) cin >> p >> q;
                    cout << -1 << endl;
                }
                sol[res++] = 1;
            }
            while (res < i + 1) sol[res++] = 0;
        }
        else if (lvl_min <= q && lvl_max > q)
        {
            while (lvl_max-- > q)
            {
                if (res == i + 1)
                {
                    while (i++ < n) cin >> p >> q;
                    cout << -1 << endl;
                }
                sol[res++] = 0;
            }
            while (res < i + 1) sol[res++] = 1;
        }
        else res = i + 1;
    }
    while (res < n) sol[res++] = 0;
    for (int i : sol) cout << i << " ";
    cout << endl;
}

int main()
{

    FAST_IO

    int t;
    cin >> t;

    while (t--) { solve(); }

    return 0;
}