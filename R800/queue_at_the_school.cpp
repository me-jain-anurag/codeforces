#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    
    string s;
    cin >> s;
    
    while (t--)
    {
        for (int i = 0; s[i + 1]; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                s[i] = 'G';
                s[i + 1] = 'B';
                i++;
            }
        }
    }
    
    cout << s;
    
    return 0;
}