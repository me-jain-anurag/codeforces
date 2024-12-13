#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, q;
    cin >> n;
    
    vector<bool> level(n, false);
    
    cin >> p;
    while (p--)
    {
        int x;
        cin >> x;
        level[x - 1] = true;
    }
    
    cin >> q;
    while (q--)
    {
        int y;
        cin >> y;
        level[y - 1] = true;
    }
    
    for(int i = 0; i < n; i++)
    {
        if (level[i] == false)
        {
            cout << "Oh, my keyboard!\n";
            return 0;
        }
    }
    
    cout << "I become the guy.\n";
    
    return 0;
}