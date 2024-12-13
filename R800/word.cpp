#include <iostream>
using namespace std;

int main()
{
    string s;
    int len, sum = 0;
    cin >> s;
    
    len = s.size();
    
    for (char &a : s)
    {
        if (a >= 'A' && a <= 'Z') sum++;
    }
    
    if (sum > len / 2)
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    else
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    cout << s << endl;
    
    return 0;
}