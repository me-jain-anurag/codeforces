#include <bits/stdc++.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        long x;
        scanf("%d%ld", &n, &x);

        std::vector<long> a(n);
        std::vector<bool> flag(n, false);


        for (size_t i = 0; i < n; i++)
        {
            scanf("%ld", &a[i]);
        }

        std::sort(a.begin(), a.end());
        
        int p = 0;
        int i;
        for (i = 0; i < n; i++)
        {
            if (a[i] > i)
            {
                printf("%d\n", i);
                break;
            }
            if (flag[a[i]] == true)
            {
                a[i] += x;
                std::sort(a.begin(), a.end());
                i--;
                continue;
            }
            flag[a[i]] = true;
        }
        if (i == n)
        {
            printf("%d\n", i);
        }                
    }

    return 0;
}