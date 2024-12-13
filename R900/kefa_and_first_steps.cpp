#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c = 1, max_count = 1;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i > 0)
        {
            if(a[i] >= a[i - 1])
            {
                c++;
                max_count = max(max_count, c);
            }
            else
            {
                c = 1;
            }
        }
    }

    cout << max_count;
    return 0;
}