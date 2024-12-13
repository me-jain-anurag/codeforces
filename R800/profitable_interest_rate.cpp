#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        long long a, b, diff;
        cin >> a >> b;
        
        diff = 2 * a - b;
        
        if (a >= b)
        {
            cout << a << endl;
        }
        else if (diff < 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << diff << endl;
        }
    }
    return 0;
}