#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    
    while (t--)
    {
        int n, k, i, count = 0;
        scanf("%d %d", &n, &k);
        const int all = n;
        vector<int> a(n);
        vector<int> flag(n, 1);
        
        for (i = 0; i < all; i++)
        {
            scanf("%d", &a[i]);
        }
        
        while (k > 0)
        {
            k -= n;
            count += n;
            
            for (i = 0; i < all; i++)
            {
                if (flag[i] == 1)
                {
                    if (a[i] == 0)
                    {
                      n--;
                      k++;
                      flag[i] = 0;
                    }
                    else a[i]--;
                }
            }
        }
        printf("%d\n", count + k);
    }
    return 0;
}