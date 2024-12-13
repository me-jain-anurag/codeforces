#include <bits/stdc++.h>
using namespace std;

constexpr double PI = 3.141592653589793;
constexpr int MOD = 1000000007;

#define $ "\n"
#define ll long long
#define ld long double
#define ull unsigned long long
#define pll pair<ll, ll>
#define vpll vector<pll>
#define vll vector<ll>
#define vvll vector<vector<ll>>

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define FOR(i, a, b) for (ll i = (ll)a; i < (ll)b; i++)
#define RFOR(i, a, b) for (ll i = (ll)a; i > (ll)b; i--)
#define all(v) (v).begin(), (v).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

struct point
{
    int pos, weight, id;
};


void solve()
{
    int n, m;
    cin >> n >> m;
    
    vector<point> p(m);

    FOR(i, 0, m)
    {
        cin >> p[i].pos >> p[i].weight;
        p[i].id = i + 1;
    }

    sort(all(p), [](point a, point b)
    {
        return a.weight < b.weight;
    });

    ll sum = 0;
    FOR(i, 0, 2 * n)
    {
        sum += p[i].weight;
    }

    cout << sum << $;

    FOR(i, 2 * n, m)
    {
        p.pop_back();
    }

    sort(all(p), [](point a, point b)
    {
        return a.pos < b.pos;
    });

    FOR(i, 0, n)
    {
        cout << p[i].id << " " << p[2 * n - i - 1].id << $;
    }
    
    cout << $;
}


int main()
{
    int t;
    cin >> t;

    while (t--) { solve(); }

    return 0;
}