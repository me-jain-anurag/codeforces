#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a, b, most = -1, passengers = 0;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        passengers += (b - a);
        most = max(most, passengers);
    }
    
    cout << most;
}

int main()
{
    solve();
    
    return 0;
}