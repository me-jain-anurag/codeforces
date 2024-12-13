#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    while (n--)
    {
        long long a, b, res;
        cin >> a >> b;
        
        res = (a % b);
        
        res = (res == 0) ? res : (b - res);
        
        cout << res << endl;
    }
    
    return 0;
}