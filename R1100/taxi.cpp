#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, taxis;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1) c1++;
        else if (a[i] == 2) c2++;
        else if (a[i] == 3) c3++;
        else c4++;
    }
    
    taxis = c4;
    
    taxis += c3;
    c1 -= c3;
    if (c1 < 0) c1 = 0;
    
    if (c2 % 2 == 0) taxis += (c2 / 2);
    else
    {
        taxis += (c2 + 1) / 2;
        c1 -= 2;
        if (c1 < 0) c1 = 0;
    }
    
    taxis += (c1 / 4);
    if (c1 % 4 != 0) taxis++;

    cout << taxis;
    return 0;
}