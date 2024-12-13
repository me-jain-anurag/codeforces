#include<bits/stdc++.h>
using namespace std;

string str_rev(string s, int len)
{
    for (int i = 0; i < ((len + 1) / 2); i++)
    {
        char temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }

    return s;
}

int main()
{
    string s, t;
    cin >> s >> t;

    int len = s.size();

    if (t == str_rev(s, len)) cout << "YES";
    else cout << "NO";

    return 0;
}