#include <bits/stdc++.h>
# define ll long long
using namespace std;

const int MAX = 10e6;

vector<bool> is_prime(MAX + 1, true);

void sieve()
{
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= MAX; ++i)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= MAX; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
}

bool isprime(ll sr)
{
    if (sr <= MAX)
    {
        return is_prime[sr];
    }
    
    for (ll i = 2; i * i <= sr; ++i)
    {
        if (sr % i == 0) return false;
    }
    
    return true;
}

bool isprimesquare(long long a)
{
    ll sr = sqrt(a);
    
    if (sr * sr == a)
    {
        if (isprime(sr)) return true;
        return false;
    }
    
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    sieve();
    
    int n;
    cin >> n;
    
    while (n--)
    {
        ll a;
        cin >> a;
        
        if (isprimesquare(a)) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}