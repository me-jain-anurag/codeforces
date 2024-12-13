#include <stdio.h>

int main()
{
    int n, k, a[50], i = 0;
    scanf("%d%d", &n, &k);
    
    while(n--)
    {
        scanf("%d", &a[i]);
        if (a[i] <= 0) break;
        
        if (i >= k - 1)
            if (a[i] < a[k - 1])
                break;

        i++;
    }
    
    printf("%d", i);
    
    return 0;
}