#include <iostream>
using namespace std;

#define rep(a, b, x) for (int x = (int)(a); x < (int)(b); x++)

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int i, result = 0;

    rep(0, n - 1, i)
    {
        if (s[i] == s[i + 1]) result++;
    }

    cout << result << endl;

    return 0;
}