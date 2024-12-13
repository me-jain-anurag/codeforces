#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    vector<int> p(n), a(n);
    
    for (i = 0; i < n; i++)
    {
        cin >> p[i];
        a[p[i] - 1] = i + 1;
    }
    
    for (i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
    
    return 0;
}