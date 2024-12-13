#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    
    while (t--)
    {
        int n, min = 1001, max = 0;
        scanf("%d", &n);
        int *a = malloc(n*sizeof(int));
        
        
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] < min) min = a[i];
            if (a[i] > max) max = a[i];
        }
        
        int result = (max - min) * (n - 1);
        printf("%d\n", result);
        free(a);
    }
    
    return 0;
}