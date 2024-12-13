#include <iostream>

using namespace std;

int main()
{
    int i, len, count1 = 0, count2 = 0, count3 = 0;
    string s, res = "";
    cin >> s;
    
    len = s.size();
    
    for (i = 0; i < len; i+=2)
    {
        char current = s[i];
        
        switch (current)
        {
            case '1':
                count1++;
                break;
            case '2':
                count2++;
                break;
            case '3':
                count3++;
                break;
        }
    }
    
    while (count1 > 0)
    {   
        res += "1+";
        count1--;
    }
        
    while (count2 > 0)
    {
        res += "2+";
        count2--;
    }
    
    while (count3 > 0)
    {   
        res += "3+";
        count3--;
    }
    
    res.pop_back();
        
    cout << res << endl;

    return 0;
}