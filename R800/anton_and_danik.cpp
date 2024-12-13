#include <bits/stdc++.h>
using namespace std;

void solve()
{
    float n, count = 0;
    cin >> n;
    
    string a;
    cin >> a;
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'A') count++;
    }
    
    if (count < (n / 2)) cout << "Danik";
    else if (count > (n / 2)) cout << "Anton";
    else cout << "Friendship";
}

int main()
{
    solve();
    return 0;
}