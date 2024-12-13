#include <bits/stdc++.h>
#define $ "\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n % 3 == 1) cout << n / 3 + 1 << " " << n / 3 << $;
    else if (n % 3 == 2) cout << n / 3 << " " << n / 3 + 1 << $;
    else cout << n / 3 << " " << n / 3 << $;
}

int main()
{
    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}