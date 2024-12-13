#include <iostream>
#define rep(x, a, b) for(int x = (int)(a); x < (int)(b); x++)

using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 1;
    int len = s.size();
    
    for (int i = 1; s[i]; i++)
    {
        if (s[i] == s[i - 1]) ++count;
        else count = 1;
        if (count >= 7)
        {
            cout << "YES";
            return 0;
        }
    }
    
    cout << "NO";
    return 0;
}