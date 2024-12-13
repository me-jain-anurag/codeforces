#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool flag = true;
    int len = s.size();
    
    if (len == 1 && islower(s[0]))
    {
        s[0] -= 32;
        cout << s;
        return 0;
    }
    
    for (int i = 1; i < len; i++)
    {
        if (islower(s[i]))
        {
            flag = false;
            break;
        }
    }
    
    if (flag)
    {
        if (islower(s[0])) s[0] -= 32;
        else s[0] += 32;
        for (int i = 1; i < len; i++)
        {
            s[i] += 32;
        }
    }
    
    cout << s;
    
    return 0;
}