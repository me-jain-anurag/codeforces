#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool flag = false;
    
    for (char &a : s)
    {
        if (a == 'H' || a == 'Q' || a == '9')
        {
            flag = true;
            break;
        }
    }
    
    if (flag) cout << "YES";
    else cout << "NO";
    
    return 0;
}