#include <iostream>
using namespace std;

#define rep(a, b, x) for (int x = (int)(a); x < (int)(b); x++)

int main()
{
    string s, res = "";
    cin >> s;

    int len = s.size();
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y'};

    rep(0, len, i)
    {
        bool isVowel = false;

        rep(0, 12, j)
        {
            if (s[i] == vowels[j])
            {
                isVowel = true;
                break;
            }
        }

        if (isVowel) continue;

        res += '.';
        res += tolower(s[i]);
    }

    cout << res << endl;
    return 0;
}