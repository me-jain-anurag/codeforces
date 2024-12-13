#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, res = "";
    cin >> s;
    
    int count = 0, len = s.size();
    
    for(size_t i = 0; i < len; i++)
    {
        if(i < len - 2 && s.substr(i, 3) == "WUB")
        {
            i += 2;
            if (count == 0 & !res.empty()) res += " ";
            count ++;
            continue;
        }
        
        count = 0;
        res += s[i];
    }
    
    cout << res;
    
    return 0;
}