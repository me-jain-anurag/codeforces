#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, next, n1, n2, n3, n4;
    cin >> n;
    
    next = n + 1;
    
    while (1)
    {
        n1 = next % 10;
        n2 = (next / 10) % 10;
        n3 = (next / 100) % 10;
        n4 = (next / 1000) % 10;
        
        if (n1 != n2 && n2 != n3 && n3 != n4 && n4 != n1 && n1 != n3 && n2 != n4)
        {
            break;
        }
        
        next++;
    }
    
    cout << next;
    
    return 0;
}