#include <iostream>
using namespace std;

int main()
{
    long long n, count = 0;
    cin >> n;
    bool flag = true;
    
    while (n)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            count++;
            n /= 10;
        }
        else n /= 10;
    }
    
    if (count == 0) flag = false;
    while (count)
    {
        if (count % 10 == 4 || count % 10 == 7)
        {
            count /= 10;
            continue;
        }
        flag = false;
        break;
    }
    
    if (flag) cout << "YES";
    else cout << "NO";
    
    return 0;
}