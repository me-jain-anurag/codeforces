//https://www.spoj.com/problems/MOZSATLA/
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

#define pb push_back
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
    vector<int> c(n - 1);
    for (int& x : c) cin >> x;
    vector<int> res(1, 1);
    int minn = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (c[i] == 0) res.push_back(res[i]);
        else if (c[i] == 1) res.push_back(res[i] + 1);
        else 
        {
            res.push_back(res[i] - 1);
            minn = min(res[i + 1], minn);
        }
    }
    for (int& x : res)
    {
        x += 1 - minn;
        cout << x << " ";
    }
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