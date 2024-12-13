#include <iostream>
#define rep(x, a, b) for(int x = (int)(a); x < (int)(b); x++)

using namespace std;

int main()
{
    string s, test = "";
    cin >> s;
    
    int i = 0;
    
    while (s[i])
    {
        if (s[i] == 'h')
        {
            test += s[i];
            break;
        }
        i++;
    }
    
    while (s[++i])
    {
        if (s[i] == 'e')
        {
            test += s[i];
            break;
        }
    }
    
    while (s[++i])
    {
        if (s[i] == 'l')
        {
            test += s[i];
            break;
        }
    }
    
    while (s[++i])
    {
        if (s[i] == 'l')
        {
            test += s[i];
            break;
        }
    }
    
    while (s[++i])
    {
        if (s[i] == 'o')
        {
            test += s[i];
            break;
        }
    }
    
    
    if (test == "hello") cout << "YES";
    else cout << "NO\n";
    return 0;
}