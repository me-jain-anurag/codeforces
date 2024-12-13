#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char str[n];
    vector<bool> flag(26, false);
    
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
        str[i] = tolower(str[i]);
        flag[str[i] - 'a'] = true;
    }
    
    for (int i = 0; i < 26; i++)
    {
        if (!flag[i])
        {
            cout << "NO";
            return 0;
        }
    }
    
    cout << "YES";
    
    return 0;
}