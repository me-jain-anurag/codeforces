#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    bool flag = true;
    
    while (n--)
    {
        cin >> x;
        if (x)
        {
            flag = false;
            break;
        }
    }
    
    if (flag) cout << "easy";
    else cout << "hard";
    
    return 0;
}