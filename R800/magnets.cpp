#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, q, count = 1;
    cin >> n >> p;
    
    q = p;
    n--;
    
    while (n--)
    {
        cin >> p;
        q -= p;
        if (q != 0) count ++;
        q = p;
    }
    
    cout << count;
    
    return 0;
}